#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	vector<int>vect1, vect2;
	vector<int>vect3, vect4;
	while (true)
	{
		vect1.insert(vect1.begin(), num1 % 10);
		num1 /= 10;
		if (num1 == 0)break;
	}
	while (true)
	{
		vect2.insert(vect2.begin(), num2 % 10);
		num2 /= 10;
		if (num2 == 0)break;
	}
	if (vect1.size() > vect2.size())
	{
		while (vect2.size() != vect1.size())
		{
			vect2.insert(vect2.begin(), 0);
		}
	}
	else if (vect2.size() > vect1.size())
	{
		while (vect1.size() != vect2.size())
		{
			vect1.insert(vect1.begin(), 0);
		}
	}
	int s = vect1.size();
	for (int i = 0; i < s; i++) {
		if (vect1[i] > vect2[i])
		{
			vect3.push_back(vect1[i]);
		}
		else if (vect2[i] > vect1[i])
		{
			vect4.push_back(vect2[i]);
		}
		else
		{
			vect3.push_back(vect1[i]);
			vect4.push_back(vect2[i]);
		}
	}
	stringstream ss, sr;
	for (auto x : vect3)
	{
		ss << x;
	}
	for (auto x : vect4)
	{
		sr << x;
	}
	int a, b;
	ss >> a; sr >> b;
	vect3.size() != 0 ? cout << a << "\n" : cout << "YODA\n";
	vect4.size() != 0 ? cout << b << "\n" : cout << "YODA\n";
}