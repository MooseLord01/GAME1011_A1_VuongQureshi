#include "Survey.h"

// Constructor
Survey::Survey(int participants) {

	numOfStudents = participants;

	this->participants = new Student [numOfStudents];

	numOfNonGamers = 0;
	averageHoursEntertainment = 0;
	numOfGamers = 0;
	averageHoursGaming = 0;
}

// Destructor to delete participants array
Survey::~Survey() { delete participants; }

void Survey::addParticipant(int spot, Student &student) {
	participants[spot] = student;
}
