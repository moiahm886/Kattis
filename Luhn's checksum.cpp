#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string number;
		cin >> number;
		vector<int>vect;
		long long answer = 0;
		for (int i = 0; i < number.size(); i++)
		{
			vect.push_back(number[i] - '0');
		}
		reverse(vect.begin(), vect.end());
		for (int i = 1; i < vect.size(); i+=2)
		{
			if (vect[i] < 5)
			{
				vect[i] *= 2;
			}
			else if(vect[i] == 5)
			{
				vect[i] = 1;
			}
			else if (vect[i] == 6)
			{
				vect[i] = 3;
			}
			else if (vect[i] == 7)
			{
				vect[i] = 5;
			}
			else if (vect[i] == 8)
			{
				vect[i] = 7;
			}
			else if (vect[i] == 9)
			{
				vect[i] = 9;
			}
		}
		for (auto x : vect)
		{
			answer += x;
		}
		cout << answer << endl;
		if (answer % 10 == 0)
		{
			cout << "PASS\n";
		}
		else cout << "FAIL\n";
		
	}
}