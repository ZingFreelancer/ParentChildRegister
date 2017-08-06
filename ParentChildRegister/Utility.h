#include "Person.h"
#include "Gender.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

/// <summary>Handles input and checking of age value.
/// If age is not valid, will re-try input procedure.</summary>
/// <param name="outputMessage">Message to show in console when asking for age input</param>
/// <returns>Returns a positive iteger</returns>
static int get_integer_input(std::string outputMessage)
{
	int re = 0;

	while (true) 
	{
		string input;
		cout << outputMessage;
		cin.ignore();
		getline(cin, input);

		// This code converts from string to number safely.
		stringstream myStream(input);
		if (myStream >> re)
			return re;
		else
			outputMessage = input+" is not a number, please enter a number: ";
	}
	return re;
}


/// <summary>Generates a series of input requests to construct a person object</summary>
/// <returns>A reference to person object</returns>
static Person& createPerson()
{
	string fName;
	string lName;
	string gender;
	int age;
	cout << "Full name: ";
	cin >> fName >> lName;
	age = get_integer_input("Age: ");

	cout << "Gender: ";
	cin >> gender;
	Person *p = new Person(fName, lName, age, getGenderEnum(gender));
	return *p;
}

/// <summary>Iterates over the entire collection and prints out conent of each item</summary>
/// <param name="people">Reference to vector of Person</param>
static void printPersonArray(const vector<Person>& people)
{
	for (auto i = people.begin(); i != people.end(); i++)
	{
		cout << i->toString() << endl;
	}
}



