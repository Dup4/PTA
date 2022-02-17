#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
struct pp {
    int score, choice, truth, wrong = 0;
    map<char, int> code;
} q[MAXN];
int main() {
    int n, m, i, j, k;
    cin >> n >> m;
    char c;
    string s;
    for (i = 0; i < m; i++) {
        scanf("%d%d%d", &q[i].score, &q[i].choice, &q[i].truth);
        for (j = 0; j < q[i].truth; j++) {
            scanf(" %c", &c);
            q[i].code[c] = 1;
        }
    }
    int flag, num, total, max = -1;
    for (i = 0; i < n; i++) {
        total = 0;
        for (j = 0; j < m; j++) {
            flag = 1;
            scanf(" %c", &c);
            cin >> num;
            if (num != q[j].truth)
                flag = 0, q[j].wrong++;
            for (k = 0; k < num; k++) {
                scanf(" %c", &c);
                if (!q[j].code[c] && flag) {
                    q[j].wrong++;
                    flag = 0;
                }
            }
            scanf("%c", &c);
            if (flag)
                total += q[j].score;
            if (q[j].wrong > max && q[j].wrong)
                max = q[j].wrong;
        }
        cout << total << endl;
    }
    if (max != -1) {
        cout << max;
        for (i = 0; i < m; i++) {
            if (q[i].wrong == max)
                printf(" %d", i + 1);
        }
    } else
        cout << "Too simple";
    cout << "\n";
}