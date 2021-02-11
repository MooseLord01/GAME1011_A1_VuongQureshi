#include "Student.h"

Student::Student() { } // Default constructor

// Non-default constructor
Student::Student(std::string name, int age, std::string collegeName, std::string programName, int semesterNum) : Person(name, age) {

	this->collegeName = collegeName;
	this->programName = programName;
	this->semesterNum = semesterNum;
}

// Setters
void Student::setCollegeName(const std::string collegeName) { this->collegeName = collegeName; }
void Student::setProgramName(const std::string programName) { this->programName = programName; }
void Student::setSemesterName(const int semesterNum) { this->semesterNum = semesterNum; }

// Getters
std::string Student::getCollegeName(std::string college) { return collegeName; }
std::string Student::getProgramName(std::string program) { return programName; }
int Student::getSemesterNum() { return semesterNum; }