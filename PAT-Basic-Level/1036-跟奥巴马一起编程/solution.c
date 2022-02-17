#include <stdio.h>
int main() {
    int n, m, c;
    scanf("%d %c", &n, &c);
    int i, j;
    if (n % 2 == 0)
        m = n / 2;
    else
        m = (n / 2) + 1;
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == m || j == 1 || j == n)
                printf("%c", c);
            else
                printf(" ");
        }
        printf("\n");
    }
}