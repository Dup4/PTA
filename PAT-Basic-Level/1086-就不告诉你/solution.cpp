#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		a *= b;
		string s = "";
		while (a)
		{
			s += a % 10 + '0';
			a /= 10;
		}	
		while (s[0] == '0') s.erase(0, 1); 
		cout << s << endl;
	}
	return 0;
}
