#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,answer=0;
	cin >> t;
	vector<int>vect(t),v;
	for (auto& x : vect)
	{
		cin >> x;
	}
	sort(vect.begin(), vect.end());
	for (int i = 0; i < vect.size() - 1; i++)
	{
		if (vect[i + 1] - vect[i] != 1)
		{
			if (!vect.empty())
			{
				v.push_back(vect[i]);
				answer += *min_element(v.begin(), v.end());
				v.clear();
			}
			else answer += vect[i];
		}
		else
		{

			v.push_back(vect[i]);
		}
	}
	if(!vect.empty())
	{
		v.push_back(vect[vect.size()-1]);
		answer += *min_element(v.begin(), v.end());
		v.clear();
	}
	else
	{
		answer += vect[vect.size() - 1];
	}
	cout << answer << endl;
}