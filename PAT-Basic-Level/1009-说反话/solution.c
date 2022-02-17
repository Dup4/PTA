#include <stdio.h>
int main() {
    char c[100][100];
    int i, j;
    for (i = 0;; i++) {
        scanf("%s", &c[i]);
        if (getchar() == '\n')
            break;
    }
    printf("%s", c[i]);
    for (j = i - 1; j >= 0; j--) {
        printf(" %s", c[j]);
    }
    printf("\n");
}