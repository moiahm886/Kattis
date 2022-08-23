#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int number = 0;
		cin >> number;
		int max = INT_MIN;
		while (number > 0)
		{
			vector<int>vect;
			int temp = number;
			int count = 0;
			while (true)
			{
				vect.insert(vect.begin(), temp % 2);
				temp /= 2;
				if (temp == 0)break;
			}
			for (auto x : vect)
			{
				if (x == 1)count++;
			}
			count > max ? max = count : max;
			number /= 10;
		}
		cout << max << endl;
	}
}