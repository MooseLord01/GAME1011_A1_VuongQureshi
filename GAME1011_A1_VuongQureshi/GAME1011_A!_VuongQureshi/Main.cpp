#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "Person.h"
#include "Student.h"
#include "GamingStudent.h"
#include "NonGamingStudent.h"
#include "Survey.h"

int main() {
	
	srand(std::time(NULL));
	bool proceed = false;	// This will hold whether or not the user wants to process the data in the survey yet
	int participants;		// This will hold the amount of participants in the survey

	// Prints out Welcome message
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	std::cout << "                               [-----[";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	std::cout << "Welcome to the survey";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	std::cout << "]-----]" << std::endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	std::cout << "This program gathers data about the entertainment consumption habits between college students." << std::endl;

	// Asks the user how many participants are in the survey
	while (proceed == false) {
		std::cout << "How many students are participating in the survey(1-500)? ";

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
		std::cin >> participants;

		if (participants > 0 && participants < 501)
			proceed = true;

		system("CLS");
	}
	
	Survey survey(participants);

	// This generates and adds the necessary amount of participants to the survey class
	for (int x = 0; x < participants; x++) {
		
		int toGameOrNotToGame = rand() % 2;	// This will determine if the student being created is a gamer or not

		// If toGameOrNotToGame is even they student will be a gamer 
		if (toGameOrNotToGame == 0) {
			
			survey.addParticipant(x, new NonGamingStudent());
		}
		else {
			survey.addParticipant(x, new GamingStudent());
		}
	}

	survey.processData();
	std::cout << survey;
	return 0;
}
