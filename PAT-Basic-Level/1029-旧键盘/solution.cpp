#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.size(), len2 = s2.size(), i, j;
    map<char, int> q;
    for (i = 0; i < len1; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] -= 32;
    }
    for (i = 0; i < len2; i++)
        if (s2[i] >= 'a' && s2[i] <= 'z')
            s2[i] -= 32;
    for (i = 0, j = 0; i < len1; i++) {
        if (s1[i] != s2[j]) {
            if (q[s1[i]] != 2)
                cout << s1[i];
            q[s1[i]] = 2;
        } else
            j++;
    }
    cout << "\n";
}