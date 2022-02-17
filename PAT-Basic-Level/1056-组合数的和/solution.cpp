#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[10], i, j, total = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            total += a[i] * 10 + a[j];
        }
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            total += a[i] * 10 + a[j];
        }
    }
    cout << total << endl;
}