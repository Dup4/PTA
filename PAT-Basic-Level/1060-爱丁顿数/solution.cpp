#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000
int a[MAXN];
int comp(int x, int y) {
    return x > y;
}
int main() {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, a + i, comp);
    int flag = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > i + 1)
            flag = i + 1;
    }
    cout << flag << endl;
}