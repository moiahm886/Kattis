#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	string str1, str2;
	int cases = 0;
	cin >> cases;
	int i = 0;
	while (cases--)
	{
		cin.ignore();
		getline(cin, str1);
		getline(cin, str2);
		vector<char>vect1, vect2;
		for (auto x : str1)
		{
			vect1.push_back(x);
		}
		for (auto x : str2)
		{
			vect2.push_back(x);
		}
		sort(vect1.begin(), vect1.end());
		sort(vect2.begin(), vect2.end());
		i++;
		vect1 == vect2 ? cout << "Case" << i << ":YES\n" : cout << "Case" << i << ":NO\n";
	}
	return 0;
}