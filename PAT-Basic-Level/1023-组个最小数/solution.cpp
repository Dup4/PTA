#include <bits/stdc++.h>
using namespace std;
int main() {
    int n[10], i, min = 100;
    for (i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        if (i && n[i] && i < min)
            min = i;
    }
    while (n[min]) {
        printf("%d", min);
        n[min]--;
        while (n[0]) {
            printf("0");
            n[0]--;
        }
    }
    for (i = min + 1; i < 10; i++) {
        while (n[i]) {
            printf("%d", i);
            n[i]--;
        }
    }
    cout << "\n";
}