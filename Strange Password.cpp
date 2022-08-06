#include<iostream>
#include<vector>
#include<utility>
#include<sstream>
using namespace std;
__int64 number = 1;
void alibaba(int k, __int64 num)
{
	int count = 1;
	__int64 i = num;
	vector<int>v;
	vector<pair<int, int>>vect;
	if (k == 1)
	{
		cout << number << "   ";
		return;
	}
	while (true)
	{
		v.insert(v.begin(), i % 10);
		i /= 10;
		if (i == 0)
		{
			break;
		}
	}
	int* arr;
	int size = v.size();
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = v[i];
	}
	for (int i = 1; i <= size; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			count++;
		}
		else
		{
			vect.push_back(make_pair(arr[i - 1], count));
			count = 1;
		}
	}
	vector <long long int>ans;
	for (int i = 0; i < vect.size(); i++)
	{
		ans.push_back(vect[i].second);
		ans.push_back(vect[i].first);
	}
	for (long long int i = 0; i < ans.size(); i++) {
		number *= 10;
		number += ans[i];
	}
	stringstream ss;
	for (int i : ans) ss << i;
	ss >> number;
	alibaba(k - 1, number);
}
int main()
{
	int cases;
	cin >> cases;
	int number;

	for (int i = 0; i < cases; i++)
	{
		cin >> number;
		alibaba(number, 1);
	}
}