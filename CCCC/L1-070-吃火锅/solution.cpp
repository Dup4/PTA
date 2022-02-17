#include <bits/stdc++.h>
using namespace std;
using db = long double;
const int N = 1e3 + 10;

vector<string> run(string &s) {
    string t = "";
    vector<string> vec;
    for (auto &c : s) {
        if (c == ' ') {
            if (t.size() > 0) {
                vec.push_back(t);
            }
            t = "";
        } else {
            t += c;
        }
    }
    if (t.size() > 0)
        vec.push_back(t);
    return vec;
}

bool gao(string s) {
    if (s.find("chi1 huo3 guo1") != -1)
        return true;
    return false;
    cout << s << endl;
    vector<string> vec(run(s));
    for (int i = 2; i < (int)vec.size(); ++i) {
        if (vec[i - 2] == "chi1" && vec[i - 1] == "huo3" && vec[i - 2] == "guo1") {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    vector<string> vec;
    while (1) {
        getline(cin, s);
        if (s == ".")
            break;
        vec.push_back(s);
    }
    cout << vec.size() << endl;
    int res = 0, ix = 0;
    for (auto &s : vec) {
        if (res < 1)
            ++ix;
        res += gao(s);
    }
    if (res == 0)
        cout << "-_-#\n";
    else
        cout << ix << ' ' << res << endl;
    return 0;
}
