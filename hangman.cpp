#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
	string str, perm;
	cin >> str >> perm;
	unordered_map<char, int>mp;
	for (int i = 0; i < str.size(); i++)
	{
		mp[str[i]]++;
	}
	int match = 0;
	int wrong = 0;
	for (int i = 0; i < perm.size(); i++)
	{
		int count = 0;
		for (auto x : mp)
		{
			if (perm[i] == x.first)
			{
				match += x.second;
				count++;
			}
		}
		count == 0 ? wrong++ : wrong;
		if (match == str.size())
		{
			cout << "WIN\n";
			break;
		}
		else if (wrong >= 10)
		{
			cout << "LOST\n";
			break;
		}
	}

}