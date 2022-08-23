#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	vector<int>vect;
	int count = 1;
	for (int i = 0; i < t; i++)
	{
		int x;
		cin >> x;
		vect.push_back(x);
	}
	for (int i = 0; i < vect.size() - 1; i++)
	{
		if (vect[i] > vect[i + 1])count++;
	}
	cout << count << endl;
}