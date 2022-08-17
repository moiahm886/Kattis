#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int cases;
	cin >> cases;
	while (cases--)
	{
		string str;
		getline(cin>>ws,str);
		vector<string>vect;
		string word;
		istringstream ss(str);
		while (ss >> word)
		{
			vect.push_back(word);
		}
		if (vect[0] == "Simon")
		{
			for (int i = 2; i < vect.size()-1; i++)
			{
				cout << vect[i] << " ";
			}
			cout << vect[vect.size()-1] << "\n";
		}
	}
	return 0;
}