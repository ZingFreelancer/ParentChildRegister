#include <iostream>
#include "Person.h"
#include <vector>
using namespace std;

vector<Person> people;

int main(int argc, const char* argv[])
{
	int count = 0;
	cout << "Enter number of people you wish to register: ";
	cin >> count;
	people.reserve(count);

	for (int i = 0; i < count; i++)
	{
		cout << "Registering person #" + to_string(i+1) +" of "+to_string(count) << endl;
	}
	

	return 0;
}