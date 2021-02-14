#include "Person.h"

Person::Person() {
	//srand(time(NULL));

	// Randomly set the student's age between 17-27
	int temp = rand() % 10 + 17;
	this->age = temp;

	name = "";
	temp = rand() % 36;
	name += firstName[temp] + " ";
	
	temp = rand() % 36;
	name += lastNames[temp];
	std::cout << name << std::endl;
}

Person::~Person() {}

// Setters
void Person::setAge(const int age) { this->age = age; }
void Person::setName(const std::string name) { this->name = name; }

// Getters
const int Person::getAge() { return age; }
const std::string Person::getName() { return name; }
