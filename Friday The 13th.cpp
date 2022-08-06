#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--)
	{
		int count = 0;
		int D, M;
		cin >> D >> M;
		int sum = 0;
		int friday = 0;
		vector<int>vect;
		for (int i = 0; i < M; i++)
		{
			int d;
			cin >> d;
			vect.push_back(d);
		}
		friday = 6;
		int y = 0;
		for (auto x : vect)
		{
			if (friday <= x)
			{
				for (int i = friday; i <= x; i += 7)
				{
					if (i == 13)
					{
						count++;
					}
					y = i;
				}
				y += 7;
				friday = y % x;
			}
			else
			{
				friday -= x;
			}
		}
		cout << count << endl;
	}
	return 0;
}