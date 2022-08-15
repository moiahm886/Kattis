#include<iostream>
using namespace std;
long sum(int num)
{
	long answer = 0;
	for (int i = 0; i <= num; i++)
	{
		answer += i;
	}
	return answer;
}
long esum(int num)
{
	long answer = 0;
	int count = 0;
	for (int i = 0; i <= num * 2; i += 2)
	{
		answer += i;
	}
	return answer;
}
long osum(int num)
{
	long answer = 0;
	int count = 0;

	for (int i = 1; i <= num * 2; i += 2)
	{
		answer += i;
	}
	return answer;
}
int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int cn = 0, num = 0;
		cin >> cn >> num;
		cout << cn<<" "<<sum(num) << " " << osum(num) << " " << esum(num) << " ";
	}
}