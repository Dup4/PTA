#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
char c[4][4];
int n[MAXN];
int main() {
    int n1;
    cin >> n1;
    int i, j, k = 0;
    for (i = 0; i < n1; i++) {
        cin >> c[0] >> c[1] >> c[2] >> c[3];
        for (j = 0; j < 4; j++) {
            if (c[j][2] == 'T') {
                n[k++] = c[j][0] - 64;
            }
        }
    }
    for (i = 0; i < k; i++) cout << n[i];
    cout << "\n";
}