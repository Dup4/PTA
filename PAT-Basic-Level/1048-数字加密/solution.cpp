#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b, s = "";
    cin >> a >> b;
    int len1 = a.size(), len2 = b.size(), i, j, k, num, len;
    if (len1 < len2)
        for (i = len2 - len1; i > 0; i--) a.insert(0, "0");
    else
        for (i = len1 - len2; i > 0; i--) b.insert(0, "0");
    // cout<<a<<endl;
    // cout<<b<<endl;
    len1 = a.size(), len2 = b.size();
    for (i = len1 - 1, k = 1, j = len2 - 1; i >= 0 && j >= 0; i--, j--, k++) {
        if (k % 2) {
            num = a[i] - '0' + b[j] - '0';
            num %= 13;
            // cout<<num<<endl;
            if (num <= 9)
                s += num + '0';
            else if (num == 10)
                s += "J";
            else if (num == 11)
                s += "Q";
            else if (num == 12)
                s += "K";
            // cout<<s<<endl;
        } else {
            num = b[j] - a[i];
            // cout<<num<<endl;
            if (num < 0)
                num += 10;
            s += num + '0';
            // cout<<s<<endl;
        }
    }
    // cout<<b[j]<<endl;
    /*if(len1<len2)
    for(;j>=0;j--) s+=b[j];
    else if(len1>len2)
    for(;i>=0;i--) s+="0";*/
    len = s.size();
    for (i = len - 1; i >= 0; i--) cout << s[i];
    cout << "\n";
}