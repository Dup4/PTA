#include <bits/stdc++.h>
using namespace std;
string add(string s1, string s2) {
    if (s1 == "" && s2 == "")
        return "0";
    if (s1 == "")
        return s2;
    if (s2 == "")
        return s1;
    string maxx = s1, minn = s2;
    if (s1.length() < s2.length()) {
        maxx = s2;
        minn = s1;
    }
    int a = maxx.length() - 1, b = minn.length() - 1;
    for (int i = b; i >= 0; --i) {
        maxx[a--] += minn[i] - '0';
    }
    for (int i = maxx.length() - 1; i > 0; --i) {
        if (maxx[i] > '9') {
            maxx[i] -= 10;
            maxx[i - 1]++;
        }
    }
    if (maxx[0] > '9') {
        maxx[0] -= 10;
        maxx = '1' + maxx;
    }
    return maxx;
}
int f(string s) {
    int i, j, len = s.size(), m;
    if (len % 2)
        m = (len - 1) / 2;
    else
        m = len / 2;
    for (i = 0, j = len - 1; i < m; i++, j--) {
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}
string tran(string s) {
    int i, len = s.size();
    string s1 = "";
    for (i = len - 1; i >= 0; i--) {
        s1 += s[i];
    }
    return s1;
}
int main() {
    string s, s1;
    cin >> s;
    int len = s.size(), i;
    if (f(s)) {
        cout << s << " is a palindromic number.\n";
        return 0;
    }
    for (i = 0; i < 10; i++) {
        s1 = tran(s);
        cout << s << " + " << s1 << " = ";
        s = add(s, s1);
        cout << s << endl;
        if (f(s)) {
            cout << s << " is a palindromic number.\n";
            return 0;
        }
    }
    cout << "Not found in 10 iterations.\n";
}
