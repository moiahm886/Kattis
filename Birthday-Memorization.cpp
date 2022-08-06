#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class friends
{
private:
	int rating;
	string Name, date;
public:
	friends(int rating, string Name, string date)
	{
		this->date = date;
		this->Name = Name;
		this->rating = rating;
	}
	const string getname() const
	{
		return Name;
	}
	const int getrating() const
	{
		return rating;
	}
	const string getdate() const
	{
		return date;
	}
	bool equals(friends f) {
		return Name == f.getname() &&
			date == f.getdate() &&
			rating == f.getrating();
	}
	string Tostring()
	{
		return Name + " " + to_string(rating) + " " + date;
	}
	bool operator < (const friends& f) const {
		return Name < f.getname();
	}
};
bool found(vector<friends>& vect, friends f)
{
	for (int i = 0; i < vect.size(); i++)
	{
		if (vect.at(i).getdate() == f.getdate())
		{
			if (vect.at(i).getrating() < f.getrating())
			{
				vect.at(i) = f;
				return true;
			}
		}
	}
	return false;
}
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int rating, number;
	string date, name;
	cin >> number;
	vector<friends>vect;
	vect.reserve(number);
	while (cin >> name >> rating >> date)
	{
		friends f(rating, name, date);
		if (!found(vect, f))
		{
			vect.push_back(f);
		}
	}
	sort(vect.begin(), vect.end());
	cout << vect.size() << endl;
	for (auto& x : vect)
	{
		cout << x.getname() << endl;
	}
	return 0;
}