#pragma once
#include <iostream>
#include <string>
#include "Gender.h"

class Person
{
private:
	std::string m_firstName;
	std::string m_lastName;
	int m_age;
	Gender m_gender;
public:
	Person();
	Person(std::string firstName, std::string lastName, int age, Gender gender);
	Person(const Person& other);

	//setters
	void setFirstName(std::string name)
	{ 
		m_firstName = name; 
	}

	void setLastName(std::string name)
	{ 
		m_lastName = name; 
	}

	void setAge(int age)
	{
		m_age = age;
	}

	void setGender(Gender gender)
	{
		m_gender = gender;
	}

	//getters
	std::string getName() const
	{ 
		return m_firstName + " " + m_lastName; 
	}

	int getAge() const
	{ 
		return m_age; 
	}

	std::string getGender() const
	{
		switch (m_gender)
		{
			case Female:	return "female";
			case Male:		return "male";
			case Unassigned: return "not assigned";
			default: return "unknown";
		}
		return "not assigned";
	}

	//Functions
	virtual std::string toString() const;

	//Operators overloading
	Person& operator=(const Person& other);
	friend std::ostream &operator<<(std::ostream &out, const Person &p);
	bool Person::operator<(const Person& other) const;

	virtual ~Person();
};

