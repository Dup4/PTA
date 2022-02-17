#include <stdio.h>
#include <string.h>
int main() {
    char n[1001];
    gets(n);
    int i, j;
    int total = 0;
    for (i = 0; i < strlen(n); i++) {
        total += n[i] - '0';
    }
    int flag;
    int ave;
    int count = 0;
    for (i = 10;; i *= 10) {
        if (total < i) {
            flag = i / 10;
            break;
        }
        count++;
    }
    for (i = 0, j = flag; i <= count; i++, j /= 10) {
        ave = (total / j) % 10;
        if (i) {
            if (ave == 0)
                printf(" ling");
            else if (ave == 1)
                printf(" yi");
            else if (ave == 2)
                printf(" er");
            else if (ave == 3)
                printf(" san");
            else if (ave == 4)
                printf(" si");
            else if (ave == 5)
                printf(" wu");
            else if (ave == 6)
                printf(" liu");
            else if (ave == 7)
                printf(" qi");
            else if (ave == 8)
                printf(" ba");
            else if (ave == 9)
                printf(" jiu");
        } else {
            if (ave == 0)
                printf(" ling");
            else if (ave == 1)
                printf("yi");
            else if (ave == 2)
                printf("er");
            else if (ave == 3)
                printf("san");
            else if (ave == 4)
                printf("si");
            else if (ave == 5)
                printf("wu");
            else if (ave == 6)
                printf("liu");
            else if (ave == 7)
                printf("qi");
            else if (ave == 8)
                printf("ba");
            else if (ave == 9)
                printf("jiu");
        }
    }
    printf("\n");
}