#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
typedef long long LL;

const double PI = 3.14159265358979323846264338327;
const double E = 2.718281828459;
const double eps = 1e-6;

const int MAXN = 0x3f3f3f3f;
const int MINN = 0xc0c0c0c0;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

struct node {
    int time;
    int flag;
};

int main() {
    int t;
    cin >> t;
a:
    while (t--) {
        map<string, node> m;
        m.clear();
        string ID;
        char vis;
        int h, mins;
        int ans = 0;
        int time = 0;
        while (cin >> ID) {
            scanf(" %c %02d:%02d", &vis, &h, &mins);
            if (ID == "0") {
                if (ans > 0)
                    time = (int)(time * 1.0 / ans + 0.5);
                printf("%d %d\n", ans, time);
                goto a;
            } else {
                if (vis == 'S') {
                    //					if (m[ID].flag == 0)
                    //					{
                    m[ID].time = h * 60 + mins;
                    m[ID].flag = 1;
                    //		 			}
                } else if (vis == 'E') {
                    if (m[ID].flag == 1) {
                        ans++;
                        time += (h * 60 + mins) - m[ID].time;
                        m.erase(ID);
                    }
                }
            }
        }
    }
}
