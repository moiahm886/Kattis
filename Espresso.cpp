#include<iostream>
using namespace std;
int main()
{
	int n, s;
	cin >> n >> s;
	int count = 0;
	int temp = s;
	while (n--)
	{
		string str;
		cin >> str;
		if (str.size() == 1)
		{
			int num = str[0] - '0';
			if (num > temp)
			{
				count++;
				temp = s;
			}
			temp -= num;
		}
		else
		{
			int num = str[0] - '0';
			if (num+1 > temp)
			{
				count++;
				temp = s;
			}
			temp -= num + 1;
		}
	}
	cout << count << endl;
}