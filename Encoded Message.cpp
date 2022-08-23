#include<iostream>
#include<cmath>;
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s, str = "";
		cin >> s;
		int i = 0;
		int power = pow(s.size(), 0.5);
		int index = power - 1;
		int k = 0;
		for (int i = index; i >= 0; i--)
		{
			k = i;
			for (int j = 0; j < power; j++)
			{
				str += s[k];
				k += power;
			}
		}
		cout << str << endl;
	}
}