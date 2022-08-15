#include<iostream>
#include<utility>
#include<vector>
#include<climits>
using namespace std;
int main()
{
	string arr[5];
	bool found[5];
	memset(found, false, 5);
	vector<pair<string, int>>vect;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		int count = 1;
		found[i] = true;
		for (int j = i+1; j < 5; j++)
		{
			if (arr[i].at(0) == arr[j].at(0))
			{
				found[j] = false;
				count++;
			}
		}
		vect.push_back(make_pair(arr[i], count));
	}
	int max = INT_MIN;
	for (auto x : vect)
	{
		if (x.second > max)max = x.second;
	}
	cout << max << endl;

}