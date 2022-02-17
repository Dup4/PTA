#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, max = INT_MIN, min = INT_MAX, a, b, c, tot1, tot2, d, e, f;
    cin >> n;
    string s_max = "", s_min = "", s;
    for (i = 0; i < n; i++) {
        cin >> s;
        scanf("%d:%d:%d", &a, &b, &c);
        scanf("%d:%d:%d", &d, &e, &f);
        tot1 = a * 3600 + b * 60 + c, tot2 = d * 3600 + e * 60 + f;
        if (tot2 > max) {
            max = tot2;
            s_max = s;
        }
        if (tot1 < min) {
            min = tot1;
            s_min = s;
        }
    }
    cout << s_min << " " << s_max << endl;
}