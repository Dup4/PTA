//#include <cstdio>
//#include <cstring>
//#include <ctype.h>
//#include <cstdlib>
//#include <cmath>
//#include <climits>
//#include <ctime>
//#include <iostream>
//#include <algorithm>
//#include <deque>
//#include <vector>
//#include <queue>
//#include <string>
//#include <map>
//#include <stack>
//#include <set>
//#include <numeric>
//#include <sstream>
//#include <iomanip>
//#include <limits>
//
//#define CLR(a) memset(a, 0, sizeof(a))
//#define pb push_back
//
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef unsigned long long ull;
// typedef pair <int, int> pii;
// typedef pair <ll, ll> pll;
//
// const double PI  = 3.14159265358979323846264338327;
// const double E   = exp(1);
// const double eps = 1e-6;
//
// const int INF  = 0x3f3f3f3f;
// const int maxn = 1e3 + 5;
// const int MOD  = 1e9 + 7;
//
// double G[maxn][maxn];
//
// int main()
//{
//	CLR(G);
//	int n, m;
//	scanf("%d%d", &n, &m);
//	double k;
//	int K;
//	map <int, int> M;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &K);
//		double k = 1.0 / K;
//		vector <int> v;
//		v.clear();
//		int num;
//		for (int j = 0; j < K; j++)
//		{
//			scanf("%d", &num);
//			v.pb(num);
//		}
//		for (int j = 0; j < K; j++)
//		{
//			for (int l = 0; l < K; l++)
//			{
//				if (j != l && v[j] * v[l] < 0)
//				{
//					if (v[j] < 0)
//						M[abs(v[j])] = 1;
//					if (v[l] < 0)
//						M[abs(v[l])] = 1;
//					int x = abs(v[j]);
//					int y = abs(v[l]);
//					G[x][y] += k;
//					G[y][x] += k;
//				}
//			}
//		}
//	}
//	int A, B;
//	scanf("%d%d", &A, &B);
//	A = abs(A);
//	B = abs(B);
//	double Max1 = -INF;
//	for (int i = 0; i < n; i++)
//	{
//		if (G[A][i] > Max1)
//			Max1 = G[A][i];
//	}
//	double Max2 = -INF;
//	for (int i = 0; i < n; i++)
//	{
//		if (G[B][i] > Max2)
//			Max2 = G[B][i];
//	}
//	if (G[A][B] == Max1 && G[B][A] == Max2)
//	{
//		int x = A;
//		int y = B;
//		if (M[A])
//			x *= -1;
//		if (M[B])
//			y *= -1;
//		printf("%d %d\n", x, y);
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (G[A][i] == Max1)
//			{
//				int x = A, y = i;
//				if (M[A])
//					x *= -1;
//				 if (M[i])
//				  y *= -1;
//				  printf("%d %d\n", x, y);
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (G[B][i] == Max2)
//			{
//				int x = B;
//				int y = i;
//				if (M[B])
//					x *= -1;
//				if (M[i])
//					y *= -1;
//				printf("%d %d\n", x, y);
//			}
//		}
//	}
//}

#include <ctype.h>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define CLR(a) memset(a, 0, sizeof(a))
#define pb push_back

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const double PI = acos(-1);
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

double ans[2][maxn];

map<int, int> M;

int tran(char s[]) {
    int len = strlen(s);
    int i;
    if (s[0] == '-')
        i = 1;
    else
        i = 0;
    int ans = 0;
    for (; i < len; i++) {
        ans = ans * 10 + s[i] - '0';
    }
    if (s[0] == '-')
        M[ans] = -1;
    else
        M[ans] = 1;
    return ans;
}

void print(int x, int y) {
    int a = abs(x);
    int b = abs(y);
    if (M[a] == -1)
        printf("-%d ", a);
    else
        printf("%d ", a);
    if (M[b] == -1)
        printf("-%d\n", b);
    else
        printf("%d\n", b);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> G[maxn];
    int num, tot;
    char s[10];
    for (int i = 0; i < m; i++) {
        scanf("%d", &tot);
        for (int j = 0; j < tot; j++) {
            scanf("%s", s);
            num = tran(s);
            //			cout << num << endl;
            G[i].pb(num);
        }
    }
    //	map <int, int>::iterator it;
    //	for (it = M.begin(); it != M.end(); it++)
    //	{
    //		printf("%d %d\n", it->first, it->second);
    //	}
    //	for (int i = 0; i < m; i++)
    //	{
    //		vector <int>::iterator it;
    //		for (it = G[i].begin(); it != G[i].end(); it++)
    //		{
    //			if (it != G[i].begin())
    //				printf(" ");
    //			printf("%d", *it);
    //		}
    //		cout << endl;
    //	}
    int A, B;
    CLR(ans);
    scanf("%s", s);
    A = tran(s);
    scanf("%s", s);
    B = tran(s);
    vector<int>::iterator it;
    double Max[2] = {0.0, 0.0};
    for (int i = 0; i < m; i++) {
        int flag[2] = {0, 0};
        for (it = G[i].begin(); it != G[i].end(); it++) {
            if (*it == abs(A))
                flag[0] = 1;
            if (*it == abs(B))
                flag[1] = 1;
            if (flag[0] && flag[1])
                break;
        }
        if (flag[0]) {
            double k = 1.0 / G[i].size();
            for (it = G[i].begin(); it != G[i].end(); it++) {
                if (*it != abs(A) && M[*it] * M[abs(A)] == -1) {
                    ans[0][*it] += k;
                }
                Max[0] = max(Max[0], ans[0][*it]);
            }
        }
        if (flag[1]) {
            double k = 1.0 / G[i].size();
            for (it = G[i].begin(); it != G[i].end(); it++) {
                if (*it != abs(B) && M[*it] * M[abs(B)] == -1) {
                    ans[1][*it] += k;
                }
                Max[1] = max(Max[1], ans[1][*it]);
            }
        }
    }
    if (ans[0][abs(B)] == Max[0] && ans[1][abs(A)] == Max[1]) {
        print(A, B);
    } else {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                if (ans[i][j] == Max[i] && M[abs(i ? B : A)] * M[j] == -1) {
                    print(i ? B : A, j);
                }
            }
        }
    }
}
