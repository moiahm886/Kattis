#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
	int size, steps;
	cin >> size >> steps;
	vector<int>vect(size, 0);
	while (steps--)
	{
		string str,word;
		getline(cin >> ws, str);
		vector<string>hello;
		istringstream ss(str);
		while (ss >> word)
		{
			hello.push_back(word);
		}
		if (hello[0] == "SET")
		{
			int index = stoi(hello[1]);
			int number = stoi(hello[2]);
			vect[index] = number;
		}
		else if (hello[0] == "PRINT")
		{
			int index = stoi(hello[1]);
			cout << vect[index] << endl;
		}
		else
		{
			int number = stoi(hello[1]);
			vect.clear();
			for (int i = 0; i < size; i++)
			{
				vect.push_back(number);
			}
		}
	}

}