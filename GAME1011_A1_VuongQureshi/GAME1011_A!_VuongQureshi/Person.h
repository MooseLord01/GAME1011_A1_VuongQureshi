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
	int age;              // This will hold the age of the person
	std::string name;     // This will hold the name of the person

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
