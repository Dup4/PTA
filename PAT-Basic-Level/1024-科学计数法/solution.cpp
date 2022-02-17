#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int i, temp2 = 1;
    double now = 0.1, temp1 = 0;
    int wo, sum = 0;
    temp1 += a[1] - '0';
    for (i = 3; i < a.length(); i++) {
        if (a[i] == 'E') {
            wo = i;
            break;
        }
        temp1 += (a[i] - '0') * now;
        now /= 10;
        sum++;
    }
    int woc = 0;
    for (i = a.length() - 1; i > wo + 1; i--) {
        woc += (a[i] - '0') * temp2;
        temp2 *= 10;
    }
    double ri = temp1 / pow(10, woc);
    double gou = temp1 * pow(10, woc);
    if (a[0] == '-')
        printf("-");
    if (a[wo + 1] == '-') {
        cout << fixed << setprecision(sum + woc) << ri;
    } else {
        if (woc >= sum)
            cout << fixed << setprecision(0) << gou;
        else
            cout << fixed << setprecision(woc - sum) << gou;
    }
}