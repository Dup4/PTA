#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> p;
    int len1 = s1.size(), len2 = s2.size(), i;
    for (i = 0; i < len2; i++) p[s2[i]] = 1;
    for (i = 0; i < len1; i++) {
        if (!p[s1[i]])
            cout << s1[i];
    }
    cout << endl;
}