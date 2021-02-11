#pragma once
#ifndef	__STUDEN_H__
#define __STUDEN_H__

#include <string>
#include "Person.h"

class Student : public Person
{
private:
	std::string collegeName; // This will hold the name of the student's college 
	std::string programName; // This will hold the name of the student's program
	int semesterNum; 		 // This will hold the semester number of the student 
	
public:
	Student();
	Student(std::string name, int age, std::string collegeName, std::string programName, int semesterNum);
	
	// Setters
	void setCollegeName(std::string collegeName);
	void setProgramName(std::string programName);
	void setSemesterName(int semesterNum);
	
	// Getters
	std::string getCollegeName(std::string college);
	std::string getProgramName(std::string program);
	int getSemesterNum();
};

#endif