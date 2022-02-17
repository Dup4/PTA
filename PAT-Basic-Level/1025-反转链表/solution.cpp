#include <bits/stdc++.h>
using namespace std;
#define maxn 100000
struct node {
    int add, data, next;
} vsort[maxn], vout[maxn], temp;
int main() {
    map<int, node> p;
    int first, N, K;
    cin >> first >> N >> K;
    int i, j, k;
    for (i = 0; i < N; i++) {
        scanf("%d%d%d", &temp.add, &temp.data, &temp.next);
        p[temp.add] = temp;
    }
    map<int, node>::iterator it;
    if (first == -1)
        cout << "-1\n";
    else {
        int nextAdd = first;
        for (i = 0; nextAdd != -1; i++, nextAdd = p[nextAdd].next) vsort[i] = p[nextAdd];
        int length = i;
        int right = K - 1;
        for (right = K - 1, j = 0; right < length; right += K) {
            for (i = right; i > right - K; i--) vout[j++] = vsort[i];
        }
        for (i = right - K + 1; i < length; i++) vout[j++] = vsort[i];
        for (i = 0; i < length - 1; i++) {
            vout[i].next = vout[i + 1].add;
            printf("%05d %d %05d\n", vout[i].add, vout[i].data, vout[i].next);
        }
        printf("%05d %d -1\n", vout[i].add, vout[i].data);
    }
}