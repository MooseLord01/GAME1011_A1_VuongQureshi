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
	int age;              //Holds the age of the person
	std::string name;     //Holds the name of the person

public:
	
	Person();
	Person(const std::string name, int age);
	virtual ~Person();
	virtual void DisplayInformation() = 0;
	
	//Setters
	void setAge(int age);
	void setName(const std::string name);

	//Getters
	int getAge() const;
	std::string getName() const;

};
#endif
