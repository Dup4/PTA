#include <bits/stdc++.h>
using namespace std;
int main() {
    int c1, c2, total, h, m, s;
    cin >> c1 >> c2;
    total = ((c2 - c1) + 50) / 100;
    // cout<<total<<endl;
    h = total / 3600;
    m = total % 3600 / 60;
    s = total % 3600 % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
}