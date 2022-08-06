#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int T = 0;
	do
	{
		cin >> T;
	} while (T < 1 || T>20);
	while (T--)
	{
		double R, h1, h2;
		do {
			cin >> R;
		} while (R < 100 || R>20000);
		do {
			cin >> h1 >> h2;
		} while (h1 < 1 || h1>1000 || h2 < 1 || h2>1000);
		R *= 1000;
		double L1 = R - h1;
		double L2 = R - h2;
		double A1 = acos(L1 / R);
		double A2 = acos(L2 / R);
		double A = A1 + A2;
		double distance = A * R / 1000;
		cout << distance << endl;
	}
	return 0;
}