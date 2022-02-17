#include <bits/stdc++.h>
using namespace std;
int isPrime(int x) {
    int flag;
    int n;
    if (x <= 1)
        flag = 0;
    else if (x == 2)
        flag = 1;
    else if (x == 3)
        flag = 1;
    else if (x % 2 == 0)
        flag = 0;
    else {
        for (n = 3; n <= (x - 1); n += 2) {
            if (x % n == 0) {
                flag = 0;
                break;
            } else {
                flag = 1;
            }
        }
    }
    return flag;
}
int main() {
    map<string, string> q;
    string s;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s;
        if (i) {
            if (isPrime(i + 1))
                q[s] = "Minion";
            else
                q[s] = "Chocolate";
        } else
            q[s] = "Mystery Award";
    }
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << s << ": ";
        if (q[s] == "")
            cout << "Are you kidding?\n";
        else {
            cout << q[s] << endl;
            q[s] = "Checked";
        }
    }
}