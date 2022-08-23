#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
constexpr auto x = 2e6;
bool prime(long long number)
{
	if (number == 2)return true;
	int count = 0;
	for (long long i = 3; i <= number / 2 + 1; i++)
	{
		if (number % i == 0)count++;
	}
	return count == 0 ? true : false;
}
int main()
{
	int count = 0;
	int number = 0;
	vector<long long>vect;
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int L = 0, U = 0;
	string sub;
	cin >> L >> U;
	cin >> sub;
	for (long long i = 2; i < x; i++)
	{
		if (prime(i))
		{
			count++;
			if (count >= L && count <= U + 1)vect.push_back(i);
		}
		if (count > U)break;
	}
	for (auto y : vect)
	{
		stringstream ss;
		ss << y;
		string str = ss.str();
		if (str.find(sub) != string::npos)
		{
			number++;
		}
	}
	cout << number << endl;
}
