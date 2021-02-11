#include "Person.h"

Person::Person() { } // Default constructor

Person::Person(const std::string name, int age)
{
	this->name = name;
	this->age = age;
}

Person::~Person()
{
}

// Setter
void Person::setAge(int age) { this->age = age; }
void Person::setName(const std::string name) { this->name = name; }

// Getter
int Person::getAge() const { return age; }
std::string Person::getName() const { return name; }
