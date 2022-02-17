#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char c[19], b[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'}, num[100][19];
    int n, i, j, k, sum = 0, flag = 1, count = 0, m = 0;
    cin >> n;
    getchar();
    for (i = 0; i < n; i++) {
        flag = 1;
        sum = 0;  // add  这错误又犯了！！！
        scanf("%s", c);
        for (j = 0; j < 17; j++) {
            if (c[j] < 48 || c[j] > 57) {
                flag = 0;
                break;
            } else {
                sum += (c[j] - '0') * a[j];
            }
        }
        sum %= 11;
        // cout<<sum<<endl;
        if (b[sum] != c[17]) {
            flag = 0;
        }
        if (!flag) {
            for (k = 0; k < 18; k++) {
                num[m][k] = c[k];  // k循环了18次 你这个m++ 是不是也+了18次
            }
            num[m][18] = '\0';  // add
            m++;                // add
        }
    }
    if (m)  // add
    {
        for (i = 0; i < m; i++) {
            printf("%s\n", num[i]);
        }
    } else
        cout << "All passed\n";  // add
}