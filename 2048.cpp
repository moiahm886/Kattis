#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>square;
vector<int>hahaha(vector<int>vect)
{
	vector<int>v, v1;
	for (auto x : vect)
	{
		if (x != 0)v.push_back(x);
	}
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] == v[i + 1])
		{
			v[i] *= 2;
			v[i + 1] = 0;
		}
	}
	for (auto x : v)
	{
		if (x != 0)v1.push_back(x);
	}
	int huhh = 4 - v1.size();
	for (int i = 0; i < huhh; i++)
	{
		v1.push_back(0);
	}
	return v1;
}
int main()
{
	square.resize(4);
	int direction;
	for (int i = 0; i < 4; i++)
	{
		square[i].resize(4);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> square[i][j];
		}
	}
	cin >> direction;
	if (direction == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			square[i] = hahaha(square[i]);
		}
	}
	else if (direction == 1)
	{
		vector<int>vect;
		vect.resize(4);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				vect[j] = square[j][i];
			}
			vect = hahaha(vect);
			for (int j = 0; j < 4; j++)
			{
				square[j][i] = vect[j];
			}
		}
	}
	else if (direction == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			reverse(square[i].begin(), square[i].end());
			square[i]=hahaha(square[i]);
			reverse(square[i].begin(), square[i].end());
		}
	}
	else
	{
		vector<int>vect;
		vect.resize(4);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				vect[j] = square[j][i];
			}
			reverse(vect.begin(), vect.end());
			vect = hahaha(vect);
			reverse(vect.begin(),vect.end());
			for (int j = 0; j < 4; j++)
			{
				square[j][i] = vect[j];
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << square[i][j] << " ";
		}
		cout << endl;
	}
}