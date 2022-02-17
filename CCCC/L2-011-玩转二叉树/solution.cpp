#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define N 100010
int n, a[50], b[50];
struct node {
    int ls, rs;
    node() {}
    node(int ls, int rs) : ls(ls), rs(rs) {}
} arr[N];
vector<int> res;

int DFS(int al, int ar, int bl, int br) {
    if (al > ar)
        return -1;
    if (al == ar)
        return b[bl];
    int root = b[bl];
    int pos = -1;
    for (int i = al; i <= ar; ++i)
        if (a[i] == root) {
            pos = i;
            break;
        }
    int sze = pos - al;
    arr[root].ls = DFS(al, pos - 1, bl + 1, bl + sze);
    arr[root].rs = DFS(pos + 1, ar, bl + sze + 1, br);
    return root;
}

void rev(int u) {
    if (u == -1)
        return;
    swap(arr[u].ls, arr[u].rs);
    rev(arr[u].ls);
    rev(arr[u].rs);
}

void BFS(int u) {
    if (u == -1)
        return;
    queue<int> q;
    q.push(u);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        res.push_back(u);
        int ls = arr[u].ls, rs = arr[u].rs;
        if (ls != -1)
            q.push(ls);
        if (rs != -1)
            q.push(rs);
    }
}

int main() {
    while (scanf("%d", &n) != EOF) {
        memset(arr, -1, sizeof arr);
        for (int i = 1; i <= n; ++i) scanf("%d", a + i);
        for (int i = 1; i <= n; ++i) scanf("%d", b + i);
        res.clear();
        int root = DFS(1, n, 1, n);
        rev(root);
        BFS(root);
        for (int i = 0; i < n; ++i) printf("%d%c", res[i], " \n"[i == n - 1]);
    }
    return 0;
}
