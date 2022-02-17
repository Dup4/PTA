#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, m, n, s;
    string list;
    map<string, int> q;
    cin >> m >> n >> s;
    int j = s;
    getchar();
    if (s > m) {
        cout << "Keep going...\n";
    } else {
        for (i = 1; i <= m; i++) {
            cin >> list;
            if (i == j) {
                if (q[list] == 0) {
                    q[list] = 1;
                    j += n;
                    cout << list << endl;
                } else {
                    j++;
                }
            }
        }
    }
}