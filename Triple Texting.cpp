#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
	string str;
	vector<string>vect;
	cin >> str;
	int size = str.size() / 3;
	for (int i = 0; i <str.size(); i += size)
	{
		string s = str.substr(i,size);
		vect.push_back(s);
	}
	unordered_map<string, int>mp;
	for (int i = 0; i < vect.size(); i++)
	{
		mp[vect[i]]++;
	}
	for (auto x : mp)
	{
		cout << x.first << "\t" << x.second << endl;
	}

	
}