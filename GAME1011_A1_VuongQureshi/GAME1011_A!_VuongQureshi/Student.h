#pragma once
#ifndef	__STUDENT_H__
#define __STUDENT_H__

#include "Person.h"

class Student : public Person
{
private:

	std::string listOfCollegeNames[10] = {"United College of Dat", "#1 College of Mustafa", "Absolute Greatest College of Wallace, which has the bestest teacher (Wally)", "Humber College", "Seneca College", "Centennial College", "George Brown College", "Ryerson(wait that's not a college) University", "College of Godstafa and DietyDat" , "Totally Real College Not a Scam plz Give Money"};	
	std::string listOfPrograms[51] = {"Air traffic Control", "Criminal Justice", "Construction Management", "Christian Counseling", "Dental Hygiene", "Diesel Mechanic", "Jewelry Design", "Music Production", "Fitness Trainer", "Business", "X-Ray Technician", "Ultrasound Technician", "Surgical Technician", "Technology Management", "Sports Medicine", "Psychology", "Photography", "Respiratory Therapy", "Patient Care Technician", "Meteorology", "Medical Office Administration", "Law", "Gun Smithing", "Infantry", "Substance Abuse Counseling", "Food Nutrition", "Nursing", "Doctoring", "Accounting", "Business Administration", "Early Childhood Administration", "eBusiness", "General Business", "General Studies", "Marketing", "Human Resources Management" , "Human Resources Administration", "Healthcare Management", "Healthcare Administration", "Financing", "History", "Biology", "Economy", "Astronomy", "Culinary Arts", "Dance", "Drama", "English", "Engineering", "Fashion Design", "Film Making"};

	std::string collegeName; // This will hold the name of the student's college 
	std::string programName; // This will hold the name of the student's program
	int semesterNum; 		 // This will hold the semester number of the student 
	
public:
	Student();
	Student(std::string name, int age);
	
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