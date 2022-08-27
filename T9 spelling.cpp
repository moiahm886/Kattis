#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	int count = 1;
	while(t--)
	{
		vector<pair<char, int>>vect = { {' ',0},{'a',2},{'b',22},{'c',222},{'d',3},{'e',33}, {'f',333}, {'g',4}, {'h',44}, {'i',444}, {'j',5}, {'k',55}, {'l',555}, {'m',6}, {'n',66}, {'o',666}, {'p',7}, {'q',77}, {'r',777}, {'s',7777}, {'t',8}, {'u',88}, {'v',888}, {'w',9}, {'x',99}, {'y',999}, {'z',9999} };
		string str;
		if (count == 1)
		{
			cin.ignore();
		}
		getline(cin, str);
		string answer = "";
		for (int i = 0; i < str.size(); i++)
		{
			for (auto& x : vect)
			{
				if (x.first == str[i])
				{
					string hahaha = to_string(x.second);
					if (!answer.empty() && answer[answer.size() - 1] == hahaha[0])answer += " ";
					answer += hahaha;
				}
			}
		}
		cout <<"Case #"<<count<<": " <<answer << endl;
		count++;
	}
	
}