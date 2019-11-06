#include <iostream>
#include <string>

using namespace std;

const int MAX_COUNTRY = 21;
const int MAX_EVENT = 40;

struct Country
{
	unsigned int ID = 0;
	string name = "";
	int eventCount = 0;
};

struct Event
{
	int year = 1900;
	unsigned int countryID = 0;
	string motto = "";
};

struct Intervall
{
	int first = 0;
	int last = 0;
};

Country countrys[MAX_COUNTRY];
Event events[MAX_EVENT];

int main()
{
	int countryCount;
	cin >> countryCount;
	for (int i = 0; i <= countryCount; ++i)
	{
		getline(cin, countrys[i].name);
		countrys[i + 1].ID = i + 1;
	}

	int eventCount;
	cin >> eventCount;
	for (int i = 0; i < eventCount; ++i)
	{
		cin >> events[i].year;
		cin >> events[i].countryID;
		cin.ignore(256, '\n');
		getline(cin, events[i].motto);
	}

	Intervall intervall;
	cin >> intervall.first >> intervall.last;



	std::cout << "Hello World!\n";

	return 0;
}
