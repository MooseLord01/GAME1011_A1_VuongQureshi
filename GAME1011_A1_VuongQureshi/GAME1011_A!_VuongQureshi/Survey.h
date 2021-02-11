#pragma once
#ifndef	__SURVEY_H__
#define __SURVEY_H__

#include "GamingStudent.h"

class Survey
{
private:
	int averageAge;					// This will hold the average age of all the participants
	int numOfStudents;				// This will hold the amount of students in the survey

	// Non-gamer related variables
	int numOfNonGamers;				// This will hold the amount of non-gaming students in the survey	  
	int averageHoursEntertainment;	// This will hold the average amount of hours spent consuming non-gaming entertainment
	int favouriteService[8];		// This will hold the amount of students that prefer a specific streaming service
	
	// Gamer related variables
	int numOfGamers;				// This will hold the amount of gaming students in the survey
	int averageHoursGaming;			// This will hold the average amount of hours spent gaming 
	int favouriteDevice[8];			// This will hold the amount of students that prefer a specific console

	Student* participants;

public:
	Survey(int participants);
	~Survey();

	void addParticipant(int spot, Student &student);
	
};

#endif