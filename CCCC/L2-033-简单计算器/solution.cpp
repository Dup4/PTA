#include <bits/stdc++.h>
using namespace std;
using db = long double;
using ll = long long;
const int N = 1e3 + 10;
int n;
ll a[N];
string op[N];

int main() {
    cin >> n;
    stack<ll> numS;
    stack<string> opS;
    for (int i = 1; i <= n; ++i) cin >> a[i], numS.push(a[i]);
    for (int i = 1; i < n; ++i) {
        cin >> op[i];
        opS.push(op[i]);
    }
    while (!opS.empty()) {
        string _op = opS.top();
        opS.pop();
        ll a = numS.top();
        numS.pop();
        ll b = numS.top();
        numS.pop();
        if (_op == "/" && !a) {
            cout << "ERROR: " << b << "/0\n";
            return 0;
        }
        if (_op == "/") {
            b /= a;
        } else if (_op == "*") {
            b *= a;
        } else if (_op == "+") {
            b += a;
        } else {
            b -= a;
        }
        numS.push(b);
    }
    cout << numS.top() << endl;
    return 0;
}
