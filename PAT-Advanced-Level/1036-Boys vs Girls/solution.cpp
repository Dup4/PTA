#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, num, max = INT_MIN, min = INT_MAX;
    string s1, s2, male_name = "", male_ID = "", female_name = "", female_ID = "";
    char c;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s1;
        scanf(" %c", &c);
        cin >> s2 >> num;
        if (c == 'M') {
            if (num < min) {
                male_name = s1;
                male_ID = s2;
                min = num;
            }
        } else {
            if (num > max) {
                max = num;
                female_name = s1;
                female_ID = s2;
            }
        }
    }
    int flag = 1;
    if (female_name != "")
        cout << female_name << " " << female_ID << endl;
    else
        cout << "Absent\n", flag = 0;
    if (male_name != "")
        cout << male_name << " " << male_ID << endl;
    else
        cout << "Absent\n", flag = 0;
    if (flag)
        cout << max - min << endl;
    else
        cout << "NA\n";
}