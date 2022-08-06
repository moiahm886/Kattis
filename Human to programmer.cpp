#include<iostream>
#include<regex>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	stringstream ss;
	ss << str;
	int found;
	string temp;

	while (!ss.eof())
	{
		ss >> temp;
		if (stringstream(temp) >> found)
		{
			vector<int>vect;
			int y = found;
			string str3 = to_string(y);
			while (true)
			{
				vect.insert(vect.begin(), found % 2);
				found /= 2;
				if (found == 0)
				{
					break;
				}
			}
			ostringstream os;
			for (auto x : vect)
			{
				os << x;
			}
			string str2(os.str());
			regex r(str3);
			string hello;
			regex_replace(back_inserter(hello), str.begin(), str.end(), r, str2);
			str = hello;
		}
		temp = "";
	}
	cout << str << endl;
}