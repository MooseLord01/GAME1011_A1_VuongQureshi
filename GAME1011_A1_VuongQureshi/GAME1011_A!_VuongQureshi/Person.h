#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

class Person
{
private:
	int age;                // This will hold the age of the person
	std::string name;       // This will hold the name of the person
	std::string firstName;  // This will hold the persons first name
	std::string lastName;   // This will hold the persons last name

	//First Name Array
	std::string listOfFirstNames[50] = {
		"Netflix",
		"Disney+",
		"Twitch",
		"YouTube",
		"Crunchyroll",
		"Hulu",
		"Amazon Prime Video",
		"FireFox", "HBO Max",
		"Sling TV",
		"Vudu",
		"ESPN+",
		"Apple TV"
	};

    //Last Name Array
	std::string listOfLastNames[50] = {

	};

public:

	Person();
	Person(const std::string name);
	virtual ~Person();
	virtual void getInformation() = 0;
	
	//Setters
	void setAge(int age);
	void setName(const std::string name);

	//Getters
	const int getAge();
	const std::string getName();
};
#endif
