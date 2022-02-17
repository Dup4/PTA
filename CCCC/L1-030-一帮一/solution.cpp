#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <map>
#include <stack>
#include <set>
#include <numeric>
#include <sstream>

using namespace std;
typedef long long LL;

const double PI = 3.14159265358979323846264338327;
const double E = 2.718281828459;
const double eps = 1e-6;

const int MAXN = 0x3f3f3f3f;
const int MINN = 0xc0c0c0c0;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

struct Node
{
	string name;
	int sex;
}temp;

int main()
{
	int n;
	cin >> n;
	vector <Node> F, M, V;
	F.clear();
	M.clear();
	V.clear();
	for (int i = 0; i < n; i++)
	{
		cin >> temp.sex >> temp.name;
		if (temp.sex == 1)
			M.push_back(temp);
		else
			F.push_back(temp);
		V.push_back(temp);
	}
	n /= 2;
	for (int i = 0; i < n; i++)
	{
		if (V[i].sex == 1)
		{
			cout << V[i].name << " " << F[F.size() - 1].name << endl;
			F.pop_back();
		}
		else
		{
			cout << V[i].name << " " << M[M.size() - 1].name << endl;
			M.pop_back();
		}
	}
}