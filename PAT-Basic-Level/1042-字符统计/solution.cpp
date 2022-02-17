#include <cctype>
#include <cstring>
#include <iostream>
int main() {
    int n, i, num[128] = {0};
    char c;
    while (scanf("%c", &c) && c != 10) {
        n = c;
        if (c >= 'a' && c <= 'z') {
            num[n]++;
        } else if (c >= 'A' && c <= 'Z') {
            n += 32;
            num[n]++;
        }
    }
    int m = 0;
    int flag;
    for (i = 97; i < 123; i++) {
        if (m < num[i]) {
            m = num[i];
            flag = i;
        } else if (m == num[i]) {
            if (flag > i) {
                m = num[i];
                flag = i;
            }
        }
    }
    printf("%c %d\n", flag, m);
    return 0;
}