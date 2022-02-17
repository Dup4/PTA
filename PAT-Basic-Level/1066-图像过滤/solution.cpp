#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, a, b, flag, i, j, num;
    cin >> m >> n >> a >> b >> flag;
    for (i = 0; i < m; i++) {
        scanf("%d", &num);
        if (num >= a && num <= b)
            printf("%03d", flag);
        else
            printf("%03d", num);
        for (j = 1; j < n; j++) {
            scanf("%d", &num);
            if (num >= a && num <= b)
                printf(" %03d", flag);
            else
                printf(" %03d", num);
        }
        cout << endl;
    }
}