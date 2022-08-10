#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	vector<int>vect;
	int cases = 0;
	cin >> cases;
	while (cases--)
	{
		string str;
		getline(cin >> ws, str);
		stringstream ss(str);
		vector<string>hello;
		string word;
		while (ss >> word)
		{
			hello.push_back(word);
		}
		if (hello[0] == "push_back")
		{
			int number = stoi(hello[1]);
			vect.push_back(number);
		}
		else if (hello[0] == "push_front")
		{
			int number = stoi(hello[1]);
			vect.insert(vect.begin(), number);
		}
		else if (hello[0] == "push_middle")
		{
			int number = stoi(hello[1]);
			int index = (vect.size() + 1) / 2;
			vect.insert(vect.begin() + index, number);
		}
		else
		{
			int index = stoi(hello[1]);
			cout << vect[index] << "\n";
		}


	}
	return 0;
}