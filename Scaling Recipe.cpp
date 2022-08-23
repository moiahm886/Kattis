#include<iostream>
using namespace std;
int main()
{
	int t;
	int n, k;
	cin >> t >> n >> k;
	int answer;
	while (t--)
	{
		int x;
		cin >> x;
		answer = x * k / n;
		cout << answer << endl;
	}
}