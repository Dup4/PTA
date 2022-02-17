#include <bits/stdc++.h>
using namespace std;

#define N 510
#define INF 0x3f3f3f3f
int n, a[N];
map<int, int> mp;
struct node {
    int fa, ls, rs, dep;
    node() {}
    node(int fa, int dep) : fa(fa), dep(dep) {
        ls = rs = -1;
    }
} t[N];
int ID(int x) {
    return mp[x];
}

void insert(int now, int x) {
    int &ls = t[now].ls, &rs = t[now].rs, dep = t[now].dep;
    if (a[x] > a[now]) {
        if (rs == -1) {
            rs = x;
            t[x] = node(now, dep + 1);
            return;
        }
        insert(rs, x);
    } else {
        if (ls == -1) {
            ls = x;
            t[x] = node(now, dep + 1);
            return;
        }
        insert(ls, x);
    }
}

int u, v;
void out(int vis) {
    if (ID(u) == 0 || ID(v) == 0)
        vis = 0;
    puts(vis ? "Yes" : "No");
}

int main() {
    mp.clear();
    scanf("%d", &n);
    scanf("%d", a + 1);
    t[1] = node(-1, 0);
    mp[a[1]] = 1;
    for (int i = 2; i <= n; ++i) {
        scanf("%d", a + i);
        mp[a[i]] = i;
        insert(1, i);
    }
    int q;
    cin >> q;
    char s[20];
    while (q--) {
        scanf("%d%s", &u, s);
        if (s[0] == 'i') {
            scanf("%s%s", s, s);
            if (s[1] == 'o') {
                if (ID(u) == 1)
                    puts("Yes");
                else
                    puts("No");
            } else if (s[0] == 'p') {
                scanf("%s%d", s, &v);
                out(t[ID(v)].fa == ID(u));
            } else if (s[0] == 'l') {
                scanf("%s%s%d", s, s, &v);
                out(t[ID(v)].ls == ID(u));
            } else {
                scanf("%s%s%d", s, s, &v);
                out(t[ID(v)].rs == ID(u));
            }
        } else {
            scanf("%d", &v);
            scanf("%s%s", s, s);
            // cout << s << endl;
            if (s[0] == 's')
                out(t[ID(u)].fa == t[ID(v)].fa);
            else {
                scanf("%s%s%s", s, s, s);
                //	cout << s << endl;
                out(t[ID(u)].dep == t[ID(v)].dep);
            }
        }
    }
    return 0;
}
