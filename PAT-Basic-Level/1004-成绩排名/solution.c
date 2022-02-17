#include <limits.h>
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char c1[n][11], c2[n][11];
    int num[n];
    int i;
    int max = INT_MIN, min = INT_MAX;
    int flag1, flag2;
    for (i = 0; i < n; i++) {
        scanf("%s %s %d", &c1[i], &c2[i], &num[i]);
        if (num[i] > max) {
            max = num[i];
            flag1 = i;
        }
        if (num[i] < min) {
            min = num[i];
            flag2 = i;
        }
    }
    printf("%s %s\n", c1[flag1], c2[flag1]);
    printf("%s %s\n", c1[flag2], c2[flag2]);
}