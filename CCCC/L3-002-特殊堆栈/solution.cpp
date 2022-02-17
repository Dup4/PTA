#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define N 100010

int n;
int sta[N], top;
namespace SEG {
int a[N << 2];
void init() {
    memset(a, 0, sizeof a);
}
void update(int id, int l, int r, int pos, int v) {
    if (l == r) {
        a[id] += v;
        return;
    }
    int mid = (l + r) >> 1;
    if (pos <= mid)
        update(id << 1, l, mid, pos, v);
    else
        update(id << 1 | 1, mid + 1, r, pos, v);
    a[id] = a[id << 1] + a[id << 1 | 1];
}
int query(int id, int l, int r, int k) {
    if (l == r)
        return l;
    int mid = (l + r) >> 1;
    if (a[id << 1] >= k)
        return query(id << 1, l, mid, k);
    else
        return query(id << 1 | 1, mid + 1, r, k - a[id << 1]);
}
}  // namespace SEG
void out() {
    puts("Invalid");
}

int main() {
    while (scanf("%d", &n) != EOF) {
        char op[10];
        top = 0;
        SEG::init();
        int x = 100000;
        int d;
        for (int i = 1; i <= n; ++i) {
            scanf("%s", op);
            if (op[1] == 'o') {
                if (top == 0)
                    out();
                else {
                    printf("%d\n", sta[top]);
                    SEG::update(1, 1, x, sta[top], -1);
                    top--;
                }
            } else if (op[1] == 'u') {
                scanf("%d", &d);
                sta[++top] = d;
                SEG::update(1, 1, x, d, 1);
            } else {
                if (top == 0)
                    out();
                else
                    printf("%d\n", SEG::query(1, 1, x, (top + 1) / 2));
            }
        }
    }
    return 0;
}
