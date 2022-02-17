#include <bits/stdc++.h>
using namespace std;
using db = double;

int main() {
    int n; cin >> n;
    db sum = 0;
    for (int i = 1; i <= n; ++i) {
        db x;
        cin >> x;
        sum += 1.0 / x;
    }
    printf("%.2f\n", n * 1.0 / sum);
    return 0;
}