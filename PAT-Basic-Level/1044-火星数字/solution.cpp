#include <bits/stdc++.h>
using namespace std;
string s1[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"},
       s2[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int change(string s) {
    int i, j = 1, len = s.size(), num = 0;
    for (i = len - 1; i >= 0; i--, j *= 10) {
        num += (s[i] - '0') * j;
    }
    return num;
}
int main() {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        string s;
        getline(cin, s);
        int i, len = s.size(), n;
        if (s[0] > '0' && s[0] <= '9') {
            n = change(s);
            if (n >= 13) {
                cout << s2[(n / 13) - 1];
                if (n % 13)
                    cout << " ";
                else
                    cout << endl;
                n %= 13;
            }
            if (n)
                cout << s1[n] << endl;
        } else if (s[0] == '0')
            cout << "tret" << endl;
        else {
            int total = 0;
            string num = "";
            if (len == 7) {
                for (i = 0; i < 3; i++) num += s[i];
                for (i = 0; i < 12; i++)
                    if (num == s2[i])
                        total += (i + 1) * 13;
                num = "";
                for (i = 4; i < 7; i++) num += s[i];
                for (i = 0; i < 13; i++)
                    if (num == s1[i])
                        total += i;
            } else {
                int flag = 1;
                for (i = 0; i < 3; i++) num += s[i];
                for (i = 0; i < 12; i++)
                    if (num == s2[i])
                        total += (i + 1) * 13, flag = 0;
                if (flag) {
                    for (i = 0; i < 13; i++)
                        if (num == s1[i])
                            total += i;
                }
            }
            cout << total << endl;
        }
    }
}