#pragma once
#ifndef	__SURVEY_H__
#define __SURVEY_H__

#include <cmath>
#include <iomanip>
#include <Windows.h>
#include "GamingStudent.h"

class Survey
{
private:
	int numOfStudents;				// This will hold the amount of students in the survey

	// Non-gamer related variables
	int numOfNonGamers;				// This will hold the amount of non-gaming students in the survey	  
	int favouriteServicePos[14];	// This will hold the amount of students that prefer a specific streaming service
	double averageAgeNonGamer;			// This will hold the average age of the non gaming students
	double averageHoursEntertainment;	// This will hold the average amount of hours spent consuming non-gaming entertainment
	std::string favouriteService;	// This will hold the name of the streaming service that was the most popular 

	// Gamer related variables
	int numOfGamers;				// This will hold the amount of gaming students in the survey
	int favouriteDevicePos[8];		// This will hold the amount of students that prefer a specific console
	double averageAgeGamer;			// This will hold the average age of the gaming students
	double averageHoursGaming;			// This will hold the average amount of hours spent gaming 
	std::string favouriteDevice;	// This will hold the name of the console that was the most popular

	Person** participants;

public:
	Survey(int participants);

	void addParticipant(int spot, Student* student);
	void processData();

	// getters
	int getNumOfStudents();

	int getNumOfNonGamers();
	int getFavouriteServicePos();
	double getAverageAgeNonGamer();
	double getAverageHoursEntertainment();
	std::string getFavouriteService();

	int getNumOfGamers();
	int getFavouriteDevicePos();
	double getAverageAgeGamer();
	double getAverageHoursGaming();
	std::string getFavouriteDevice();
	
	std::string getName(int spot);
	Student* getStudent(int spot);

	// Overloaded cout operator
	friend std::ostream& operator<<(std::ostream& out, Survey survey);
};

#endif