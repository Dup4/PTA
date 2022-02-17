#include <iostream>
using namespace std;
int main() {
    int a, b, d;
    cin >> a >> b >> d;
    int sum[100000], i, j = 0;
    long long c = a + b;
    for (i = 0; c; i++) {
        sum[i] = c % d;
        c /= d;
        j++;
    }
    for (i = j - 1; i >= 0; i--) {
        cout << sum[i];
    }
    cout << endl;
}