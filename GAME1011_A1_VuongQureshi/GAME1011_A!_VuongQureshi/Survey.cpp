#include "Survey.h"

#include "NonGamingStudent.h"

// Constructor
Survey::Survey(int participants) {

	numOfStudents = participants;

	this->participants = new Person*[numOfStudents];

	// This sets all of the values to 0 so they can be incremented properly
	numOfGamers = 0;
	averageAgeGamer = 0;
	averageHoursGaming = 0;
	
	numOfNonGamers = 0;
	averageAgeNonGamer = 0;
	averageHoursEntertainment = 0;

	for (int x = 0; x < 14; x++)
		favouriteServicePos[x] = 0;

	for (int x = 0; x < 8; x++)
		favouriteDevicePos[x] = 0;
}

// I changed this file
void Survey::addParticipant(int spot, Student* student) {
	participants[spot] = student;
}

void Survey::processData() {

	for (int x = 0; x < numOfStudents; x++) {

		// Checks to see if the student is a gamer or not and increment appropriate variables accordingly	
		if (static_cast<Student*>(participants[x])->getGamer()) {
			numOfGamers++;
			averageAgeGamer += participants[x]->getAge();
			averageHoursGaming += static_cast<GamingStudent*>(participants[x])->getGamerHours();
			++favouriteDevicePos[static_cast<GamingStudent*>(participants[x])->getPositionOfDevice()];
		}
		else
		{
			numOfNonGamers++;
			averageAgeNonGamer += participants[x]->getAge();
			averageHoursEntertainment += static_cast<NonGamingStudent*>(participants[x])->getStreamHours();
			++favouriteServicePos[static_cast<NonGamingStudent*>(participants[x])->getPositionOfService()];
		}
	}
	
	if (numOfGamers != 0) {
		averageAgeGamer /= numOfGamers;
		averageHoursGaming /= numOfGamers;
	}
	else {
		averageAgeGamer = 0;
		averageHoursGaming = 0;
	}
	if (numOfNonGamers != 0) {
		averageAgeNonGamer /= numOfNonGamers;
		averageHoursEntertainment /= numOfNonGamers;
	}
	else {
		averageAgeNonGamer = 0;
		averageHoursEntertainment = 0;
	}
		
	int mostPopular = 0; // This is a temp variable to compare the amount of votes for a specific console/streaming service

	// This will determine the most popular console 
	for (int x = 0; x < 8; x++)
	{
		mostPopular < favouriteDevicePos[x] ? mostPopular = x : mostPopular; 
	}
	favouriteDevice = static_cast<GamingStudent*>(participants[0])->getListOfDevices(mostPopular);

	mostPopular = 0;

	// This will determine the most popular streaming service 
	for (int x = 0; x < 14; x++)
	{
		mostPopular < favouriteServicePos[x] ? mostPopular = x : mostPopular; 
	}
	favouriteService = static_cast<NonGamingStudent*>(participants[0])->getListOfServices(mostPopular);	
}

// getters
int Survey::getNumOfStudents() { return numOfStudents; }
int Survey::getNumOfNonGamers() { return numOfNonGamers; }
double Survey::getAverageAgeNonGamer() { return averageAgeGamer; }
double Survey::getAverageHoursEntertainment() { return averageHoursEntertainment; }
std::string Survey::getFavouriteService() { return favouriteService; }

int Survey::getNumOfGamers() { return numOfGamers; }
double Survey::getAverageAgeGamer() { return averageAgeNonGamer; }
double Survey::getAverageHoursGaming() { return averageHoursGaming; }
std::string Survey::getFavouriteDevice() { return favouriteDevice; }

std::string Survey::getName(int spot) { return participants[spot]->getName(); }
Student* Survey::getStudent(int spot) { return static_cast<Student*>(participants[spot]); }

std::ostream& operator<<(std::ostream& out, Survey survey)
{
	int spaces = 0;

	// SURVEY SAYS:
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ____________________________________________________________" << std::endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||                    ";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << " SURVEY SAYS:";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << "                       ||" << std::endl;


	// Divider
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);	// Purple
	out << " ||========================================================||" << std::endl;


	// Number of Participants in survey
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Purple
	out << " ||";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // Cyan
	out << " Number of participants in the survey";

	out << std::setw(18) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); // Orange
	out << survey.getNumOfStudents();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Average age
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << " Average age ";

	out << std::setw(42) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	// << survey.getAverageAge();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Divider
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•-||" << std::endl;


	// Number of gaming students
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << " Number of gaming students ";

	out << std::setw(28) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	out << survey.getNumOfGamers();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Favourite gaming console
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " || ";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << "Favourite gaming console";

	out << std::setw(30) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	out << survey.getFavouriteDevice();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Average number of hours spent gaming
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << " Average number of hours spent gaming ";

	out << std::setw(17) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	out << survey.getAverageHoursGaming();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Divider
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||-•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•--•||" << std::endl;


	// Number of non-gaming students
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << " Number of non-gaming students ";

	out << std::setw(24) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	out << survey.getNumOfNonGamers();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Favourite streaming service
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << " Favourite streaming service";

	out << std::setw(27) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	out << survey.getFavouriteService();
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Average number of hours spent
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " || ";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	out << "Average number of hours spent";

	out << std::setw(25) << std::setfill(' ');

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
	out << survey.getAverageHoursEntertainment();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " ||" << std::endl;


	// Divider
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	out << " |==========================================================|" << std::endl;

	return out;
}
