#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string str;
	vector<char>password;
	cin >> str;
	int j = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'L' || str[i] == 'R' || str[i] == 'B')
		{
			j = i;
			break;
		}
		else
		{
			password.push_back(str[i]);
			j++;
		}
	}
	if (j == str.size())
	{
		for (auto x : password)
		{
			cout << x;
		}
	}
	else
	{
		for (int i = j; i < str.size(); i++)
		{
			if (str[i] == 'L')j--;
			else if (str[i] == 'R')j++;
			else if (str[i] == 'B')
			{
				password.erase(password.begin() + j - 1);
				j--;
			}
			else
			{
				password.insert(password.begin() + j,str[i]);
				j++;
			}
		}
		for (auto x : password)
		{
			cout << x;
		}
	}
}