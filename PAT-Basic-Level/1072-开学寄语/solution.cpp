#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, i, j, tot1 = 0, tot2 = 0, total, flag;
    string s, name;
    map<string, int> q;
    cin >> n >> m;
    for (i = 0; i < m; i++) {
        cin >> s;
        q[s] = 2;
    }
    for (i = 0; i < n; i++) {
        cin >> name;
        cin >> total;
        flag = 0;
        for (j = 0; j < total; j++) {
            cin >> s;
            if (q[s] == 2) {
                if (flag) {
                    tot2++;
                    cout << " " << s;
                } else {
                    tot1++, tot2++;
                    flag = 1;
                    cout << name << ": " << s;
                }
            }
        }
        if (flag)
            printf("\n");
    }
    cout << tot1 << " " << tot2 << endl;
}