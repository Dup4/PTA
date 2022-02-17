#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 10;

bool ok(string id) {
	if (id.size() != 18) return false;
	for (auto &c : id) {
		if (!isdigit(c)) 
			return false;
	}
	return true;
}

struct node {
	string name, id, status;
	int h, m, ix;
	node() {}
	node(string name, string id, string status, int h, int m, int ix) : name(name), id(id), status(status), h(h), m(m), ix(ix) {}
	bool operator < (const node &other) const {
		if (h != other.h) return h < other.h;
		if (m != other.m) return m < other.m;
		return ix < other.ix;
	}
};

int main() {
	int D, P;
	scanf("%d%d", &D, &P);
	map <string, string> mp;
	map <string, int> last;
	vector <string> bin;
	for (int i = 1; i <= D; ++i) {
		int T, S;
		cin >> T >> S;
		vector <node> vec;
		for (int j = 1; j <= T; ++j) {
			string name, _id, status;
			cin >> name >> _id;
			cin >> status;
			int h, m;
			scanf("%02d:%02d", &h, &m);
			if (ok(_id)) {
				if (status == "1") {
					bin.push_back(_id);
				}
				mp[_id] = name;
				vec.push_back(node(name, _id, status, h, m, j));			
			}
		}
		sort(vec.begin(), vec.end());
		for (auto &it : vec) {
			if (S > 0 && (last.count(it.id) == 0 || last[it.id] + P < i)) {
				--S;
				last[it.id] = i;
				cout << it.name << ' ' << it.id << "\n";
			}
		}
	}
	map <string, int> uni;
	for (auto &it : bin) {
		if (uni.count(it) == 0) {
			cout << mp[it] << ' ' << it << "\n";
			uni[it] = 1;
		}
	}
	return 0;
}
 
