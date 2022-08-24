#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long ull;
int main()
{
	int m, n, t;
	cin >> m >> n >> t;
	if (t == 1)
	{
		ull answer = 1;
		for (int i = 1; i <= n; i++)
		{
			answer *= i;
			if (answer > m)break;
		}
		answer > m ? cout << "TLE\n" : cout << "AC\n";
	}
	else if (t == 2)
	{
		ull answer = 1;
		answer = pow(2, n);
		answer > m ? cout << "TLE\n" : cout << "AC\n";
	}
	else if (t == 3)
	{
		ull answer = 1;
		answer = pow(n, 4);
		answer > m ? cout << "TLE\n" : cout << "AC\n";
	}
	else if (t == 4)
	{
		ull answer = 1;
		answer = pow(n, 3);
		answer > m ? cout << "TLE\n" : cout << "AC\n";
	}
	else if (t == 5)
	{
		ull answer = 1;
		answer = pow(n, 2);
		answer > m ? cout << "TLE\n" : cout << "AC\n";
	}
	else if (t == 6)
	{
		ull answer = 1;
		answer = n * log2(n);
		answer >= m ? cout << "TLE\n" : cout << "AC\n";
	}
	else if (t == 7)
	{
		n > m ? cout << "TLE\n" : cout << "AC\n";
	}
}