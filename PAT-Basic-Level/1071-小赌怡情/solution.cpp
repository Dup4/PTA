#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, k, i, j;
    cin >> t >> k;
    for (i = 0; i < k; i++) {
        int n1, b, a, n2;
        cin >> n1 >> b >> a >> n2;
        if (t < a)
            printf("Not enough tokens.  Total = %d.\n", t);
        else if ((b && n2 > n1) || (b == 0 && n2 < n1)) {
            t += a;
            printf("Win %d!  Total = %d.\n", a, t);
        } else {
            t -= a;
            printf("Lose %d.  Total = %d.\n", a, t);
            if (t <= 0) {
                printf("Game Over.\n");
                break;
            }
        }
    }
}