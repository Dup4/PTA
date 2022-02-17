#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int total = 0, i, tot1 = 0, tot2 = 0;
    getline(cin, s);
    int len = s.size();
    for (i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            total += (s[i] - 'A' + 1);
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            total += (s[i] - 'a' + 1);
        }
    }
    /*cout<<total<<endl;
    if(total%2) tot2++;
    else tot1++;
    cout<<total%2<<endl;*/
    while (total) {
        if (total % 2)
            tot2++;
        else
            tot1++;
        total /= 2;
        // cout<<total%2<<endl;
    }
    cout << tot1 << " " << tot2 << endl;
}