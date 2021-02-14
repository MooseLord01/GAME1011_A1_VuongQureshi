#include "Student.h"

// Non-default constructor
Student::Student() {
	// Randomly set collegeName and programName to a random value taken from their respective lists
	int temp = rand() % 10;
	this->collegeName = listOfCollegeNames[temp];

	temp = rand() % 51;
	this->programName = listOfPrograms[temp];

	// Randomly assign the current semester number to the student
	temp = rand() % 4 + 1;
	this->semesterNum = temp;
}

Student::Student(Student* stu) {
	collegeName = stu->getCollegeName();
	programName = stu->getProgramName();
	semesterNum = stu->getSemesterNum();
}

// Setters
void Student::setCollegeName(const std::string collegeName) { this->collegeName = collegeName; }
void Student::setProgramName(const std::string programName) { this->programName = programName; }
void Student::setSemesterName(const int semesterNum) { this->semesterNum = semesterNum; }
void Student::setGamer(const bool status) { isGamer = status; }

// Getters
const std::string Student::getCollegeName() { return collegeName; }
const std::string Student::getProgramName() { return programName; }
const int Student::getSemesterNum() { return semesterNum; }
const bool Student::getGamer() { return isGamer; }