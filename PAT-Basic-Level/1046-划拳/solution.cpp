#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, tot1 = 0, tot2 = 0, total;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        total = a + c;
        if (b == total && d != total)
            tot2++;
        else if (d == total && b != total)
            tot1++;
    }
    cout << tot1 << " " << tot2 << endl;
}