#include "Person.h"

Person::Person() {
	srand(time(NULL));

	// Randomly set the student's age between 17-27
	int temp = rand() % 10 + 17;
	this->age = temp;

	name = "";
	temp = rand() % 36;
	name += firstName[temp] + " ";
	std::cout << "Temp first name: " << temp << std::endl;

	
	temp = rand() % 36;
	name += lastNames[temp];
	
	std::cout << "Temp last name: " << temp << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}

Person::~Person() {}

// Setters
void Person::setAge(const int age) { this->age = age; }
void Person::setName(const std::string name) { this->name = name; }

// Getters
const int Person::getAge() { return age; }
const std::string Person::getName() { return name; }
