#include "Person.h"


Person::Person() : m_firstName(""), m_lastName(""), m_age(-1), m_gender(Gender::Unassigned)
{
	std::cout << "Empty constructor for " << *this << " at " << this << std::endl;
}

Person::Person(std::string firstName, std::string lastName, int age, Gender gender) :
	m_firstName(firstName), m_lastName(lastName), m_age(age), m_gender(gender)
{
	std::cout << "Default constructor for " << *this << " at " << this << std::endl;
}

Person::Person(const Person &other) :
	m_firstName(other.m_firstName), m_lastName(other.m_lastName), m_age(other.m_age), m_gender(other.m_gender)
{
	std::cout << "Copy constructor for " << *this << " at " << this << std::endl;
}


std::string Person::toString() const
{
	return m_firstName + " "+m_lastName + " (" + getGender() + "), " + std::to_string(m_age) + " years old";
}

Person & Person::operator=(const Person& other)
{
	std::cout << "Copy constructor for " << other << " at " << this << std::endl;
	m_firstName = other.m_firstName;
	m_lastName = other.m_lastName;
	m_age = other.m_age;
	m_gender = other.m_gender;

	return *this;
}

Person::~Person()
{
	std::cout << "Destructor for " << *this << " at " << this << std::endl;
}

bool Person::operator<(const Person& other) const
{
	if (m_firstName == other.m_firstName)
		return m_age < other.m_age;
	else
		return m_lastName < other.m_lastName;
}

std::ostream & operator<<(std::ostream & out, const Person & p)
{
	return out << p.m_firstName << " " << p.m_lastName;
}
