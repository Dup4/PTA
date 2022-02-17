#include <bits/stdc++.h>
using namespace std;
#define maxn 2000
struct pp {
    string ID;
    int C, M, E, A, flag = 0;
    int rank_C, rank_M, rank_E, rank_A, rank_min = INT_MAX;
    char c;
} p[maxn];
int comp1(pp x, pp y) {
    return x.C > y.C;
}
int comp2(pp x, pp y) {
    return x.M > y.M;
}
int comp3(pp x, pp y) {
    return x.E > y.E;
}
int comp4(pp x, pp y) {
    return x.A > y.A;
}
int main() {
    int N, M, i, j, flag;
    cin >> N >> M;
    map<string, pp> q;
    string s;
    for (i = 0; i < N; i++) {
        cin >> s;
        scanf("%d%d%d", &q[s].C, &q[s].M, &q[s].E);
        q[s].A = (q[s].C + q[s].M + q[s].E) / 3;
        q[s].flag = 1;
        p[i].ID = s, p[i].C = q[s].C, p[i].M = q[s].M, p[i].E = q[s].E, p[i].A = q[s].A;
    }
    sort(p, p + i, comp1);
    q[p[0].ID].rank_C = 1, flag = 1;
    for (j = 1; j < i; j++) {
        if (q[p[j].ID].C != q[p[j - 1].ID].C)
            flag = j + 1;
        q[p[j].ID].rank_C = flag;
    }
    sort(p, p + i, comp2);
    q[p[0].ID].rank_M = 1, flag = 1;
    for (j = 1; j < i; j++) {
        if (q[p[j].ID].M != q[p[j - 1].ID].M)
            flag = j + 1;
        q[p[j].ID].rank_M = flag;
    }
    sort(p, p + i, comp3);
    q[p[0].ID].rank_E = 1, flag = 1;
    for (j = 1; j < i; j++) {
        if (q[p[j].ID].E != q[p[j - 1].ID].E)
            flag = j + 1;
        q[p[j].ID].rank_E = flag;
    }
    sort(p, p + i, comp4);
    q[p[0].ID].rank_A = 1, flag = 1, j = 0;
    if (q[p[j].ID].rank_E < q[p[j].ID].rank_min) {
        q[p[j].ID].rank_min = q[p[j].ID].rank_E;
        q[p[j].ID].c = 'E';
    }
    if (q[p[j].ID].rank_M <= q[p[j].ID].rank_min) {
        q[p[j].ID].rank_min = q[p[j].ID].rank_M;
        q[p[j].ID].c = 'M';
    }
    if (q[p[j].ID].rank_C <= q[p[j].ID].rank_min) {
        q[p[j].ID].rank_min = q[p[j].ID].rank_C;
        q[p[j].ID].c = 'C';
    }
    if (q[p[j].ID].rank_A <= q[p[j].ID].rank_min) {
        q[p[j].ID].rank_min = q[p[j].ID].rank_A;
        q[p[j].ID].c = 'A';
    }
    for (j = 1; j < i; j++) {
        if (q[p[j].ID].A != q[p[j - 1].ID].A)
            flag = j + 1;
        q[p[j].ID].rank_A = flag;
        if (q[p[j].ID].rank_E < q[p[j].ID].rank_min) {
            q[p[j].ID].rank_min = q[p[j].ID].rank_E;
            q[p[j].ID].c = 'E';
        }
        if (q[p[j].ID].rank_M <= q[p[j].ID].rank_min) {
            q[p[j].ID].rank_min = q[p[j].ID].rank_M;
            q[p[j].ID].c = 'M';
        }
        if (q[p[j].ID].rank_C <= q[p[j].ID].rank_min) {
            q[p[j].ID].rank_min = q[p[j].ID].rank_C;
            q[p[j].ID].c = 'C';
        }
        if (q[p[j].ID].rank_A <= q[p[j].ID].rank_min) {
            q[p[j].ID].rank_min = q[p[j].ID].rank_A;
            q[p[j].ID].c = 'A';
        }
    }
    for (i = 0; i < M; i++) {
        cin >> s;
        if (q[s].flag)
            cout << q[s].rank_min << " " << q[s].c << endl;
        else
            cout << "N/A\n";
    }
}
