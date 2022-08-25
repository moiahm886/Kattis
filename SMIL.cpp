#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin >> s;
	vector<int>vect;
	for (int i = 0; i < s.size()-1; i++)
	{
		if (s[i] == ':' || s[i] == ';')
		{
			if (s[i + 1] == ')')
			{
				vect.push_back(i);
			}
			else if (s[i + 1] == '-' && s[i + 2] == ')')
			{
				vect.push_back(i);
			}
		}
	}
	for (auto x : vect)
	{
		cout << x << "\n";
	}
}