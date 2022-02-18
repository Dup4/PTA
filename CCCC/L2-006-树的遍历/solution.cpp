#include <bits/stdc++.h>
using namespace std;

#define N 110000
struct node {
    int ls, rs;
    node() {}
    node(int ls, int rs) : ls(ls), rs(rs) {}
    void init() {
        ls = rs = -1;
    }
} arr[N];
int n, a[N], b[N];
vector<int> res;

int DFS(int al, int ar, int bl, int br) {
    if (al > ar)
        return -1;
    if (al == ar)
        return b[br];
    int root = b[br];
    int pos = -1;
    for (int i = al; i <= ar; ++i)
        if (a[i] == root) {
            pos = i;
            break;
        }
    int sze = pos - al;
    arr[root].ls = DFS(al, pos - 1, bl, bl + sze - 1);
    arr[root].rs = DFS(pos + 1, ar, bl + sze, br - 1);
    return root;
}

void BFS(int rt, vector<int> &res) {
    queue<int> q;
    q.push(rt);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        res.push_back(u);
        if (arr[u].ls != -1)
            q.push(arr[u].ls);
        if (arr[u].rs != -1)
            q.push(arr[u].rs);
    }
}

int main() {
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i < N; ++i) arr[i].init();
        for (int i = 1; i <= n; ++i) scanf("%d", a + i);
        for (int i = 1; i <= n; ++i) scanf("%d", b + i);
        for (int i = 1; i <= n; ++i) swap(a[i], b[i]);
        int rt = DFS(1, n, 1, n);
        BFS(rt, res);
        for (int i = 0; i < n; ++i) printf("%d%c", res[i], " \n"[i == n - 1]);
    }
    return 0;
}
