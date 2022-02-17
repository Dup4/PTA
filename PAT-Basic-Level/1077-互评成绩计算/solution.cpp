#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
int n[MAXN][MAXN];
int main() {
    int N, M;
    cin >> N >> M;
    int i, j, k, l;
    int a, b;
    for (i = 0; i < N; i++) {
        cin >> b;
        for (j = 0, k = 0; j < N - 1; j++) {
            cin >> a;
            if (a >= 0 && a <= M)
                n[i][k++] = a;
        }
        sort(n[i], n[i] + k);
        int total = 0;
        for (l = 1; l < k - 1; l++) {
            total += n[i][l];
        }
        total /= (k - 2);
        printf("%d\n", (int)((total + b) * 1.0 / 2.0 + 0.5));
    }
}