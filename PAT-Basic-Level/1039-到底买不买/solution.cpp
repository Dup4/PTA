#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    map<char, int> q;
    int len = s.size(), i, lack = 0, total = 0;
    for (i = 0; i < len; i++) q[s[i]]++;
    cin >> s;
    len = s.size();
    for (i = 0; i < len; i++) {
        if (q[s[i]]) {
            q[s[i]]--;
        } else
            lack++;
    }
    if (!lack) {
        map<char, int>::iterator it;
        for (it = q.begin(); it != q.end(); it++) total += it->second;
        printf("Yes %d\n", total);
    } else
        printf("No %d\n", lack);
}