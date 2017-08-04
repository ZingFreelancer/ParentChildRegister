#include "Person.h"
#include "Gender.h"
#include <iostream>
#include <vector>
using namespace std;

static Person& createPerson()
{
	string fName;
	string lName;
	int age = 22;
	Gender gender = Male;
	cout << "Input name: ";
	cin >> fName >> lName;

	Person *p = new Person(fName, lName, age, gender);
	return *p;
}

static void printPersonArray(const vector<Person>& people)
{
	for (auto i = people.begin(); i != people.end(); i++)
	{
		cout << i->toString() << endl;
	}
}