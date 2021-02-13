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
	int averageAge;					// This will hold the average age of all the participants
	int numOfStudents;				// This will hold the amount of students in the survey

	// Non-gamer related variables
	int numOfNonGamers;				// This will hold the amount of non-gaming students in the survey	  
	int averageHoursEntertainment;	// This will hold the average amount of hours spent consuming non-gaming entertainment
	int favouriteServicePos[14];	// This will hold the amount of students that prefer a specific streaming service
	std::string favouriteService;	// This will hold the name of the streaming service that was the most popular 

	// Gamer related variables
	int numOfGamers;				// This will hold the amount of gaming students in the survey
	int averageHoursGaming;			// This will hold the average amount of hours spent gaming 
	int favouriteDevicePos[8];		// This will hold the amount of students that prefer a specific console
	std::string favouriteDevice;	// This will hold the name of the console that was the most popular

	Student* participants;

public:
	Survey(int participants);
	//~Survey();

	void addParticipant(int spot, Student* student);
	void processData();

	// getters
	int getAverageAge();
	int getNumOfStudents();

	int getNumOfNonGamers();
	int getAverageHoursEntertainment();
	int getFavouriteServicePos();
	std::string getFavouriteService();

	int getNumOfGamers();
	int getAverageHoursGaming();
	int getFavouriteDevicePos();
	std::string getFavouriteDevice();
	std::string getName(int spot);

	// Overloaded operator
	friend std::ostream& operator<<(std::ostream& out, Survey survey);
};

#endif