#include "Person.h"

Person::Person() { } // Default constructor

Person::Person(const std::string name) {
	srand(time(NULL));
	
	this->name = name;

	// Randomly set the student's age between 17-27
	int temp = rand() % 10 + 17;
	this->age = temp;
}

Person::~Person() {}

// Setters
void Person::setAge(const int age) { this->age = age; }
void Person::setName(const std::string name) { this->name = name; }

// Getters
const int Person::getAge() { return age; }
const std::string Person::getName() { return name; }
