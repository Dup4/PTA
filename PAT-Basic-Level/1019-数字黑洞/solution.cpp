#include <iostream>
#include <map>
#include <string>
using namespace std;
string division(string s1, string s2) {
    int i, m, num = 0;
    string s, c;
    for (i = 3; i >= 0; i--) {
        num += s1[i] - s2[i];
        if (num >= 0) {
            s += num + '0';
            num = 0;
        } else if (num < 0) {
            num += 10;
            s += num + '0';
            num = -1;
        }
    }
    for (i = 3; i >= 0; i--) {
        c += s[i];
    }
    return c;
}
string front(string s) {
    int i = 0, j = 0;
    char temp;
    int len = s.size();
    for (i = 0; i < 4 - len; i++) {
        s.insert(0, "0");
    }
    for (i = 1; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (s[j] < s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    return s;
}
string back(string s) {
    int i = 0, j = 0;
    char temp;
    int len = s.size();
    for (i = 0; i < 4 - len; i++) {
        s.insert(0, "0");
    }
    for (i = 1; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (s[j] > s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    return s;
}
int main() {
    string s;
    int i, j, k;
    cin >> s;
    if (s[0] == s[1] && s[2] == s[3] && s[1] == s[2]) {
        cout << s << " - " << s << " = "
             << "0000\n";  //
    } else {
        cout << front(s) << " - " << back(s) << " = ";
        s = division(front(s), back(s));
        cout << s << endl;
        while (s != "6174") {
            cout << front(s) << " - " << back(s) << " = ";
            s = division(front(s), back(s));
            cout << s << endl;
        }
    }
}