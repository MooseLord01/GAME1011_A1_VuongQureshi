#include "GamingStudent.h"

GamingStudent::GamingStudent(std::string name) : Student(name) {
	srand(time(NULL));

	// This randomly assigns a favourite game device
	int temp = rand() % 8;
	gameDevice = listOfGameDevice[temp];

	// This randomly assigns how many hours a week the student spends playing video games
	//(it's between 1 and 168 because that's how many hours are in a week and true gamers would spend every waking second playing games)
	temp = rand() % 168 + 1;
	gamerHours = temp;

	this->setGamer(true); // This sets the isGamer bool in Student to true  
}

void GamingStudent::getInformation() {

	std::cout << getName() << std::endl << getAge() << std::endl << getSemesterNum() << std::endl << getProgramName() << std::endl << getGamer() << std::endl << getCollegeName() << std::endl << getGameDevice() << std::endl << getGamerHours() << std::endl;
}

// Setters
void GamingStudent::setGameDevice(const std::string console) { gameDevice = console; }
void GamingStudent::setGamerHours(const int hours) { gamerHours = hours; }

// Getters
const std::string GamingStudent::getGameDevice() { return gameDevice; }
const int GamingStudent::getGamerHours() { return gamerHours; }

