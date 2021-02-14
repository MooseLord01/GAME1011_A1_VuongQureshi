#include "GamingStudent.h"

GamingStudent::GamingStudent() {
	// This randomly assigns a favourite game device
	positionOfDevice = rand() % 8;
	gameDevice = listOfGameDevice[positionOfDevice];

	// This randomly assigns how many hours a week the student spends playing video games
	//(it's between 1 and 168 because that's how many hours are in a week and true gamers would spend every waking second playing games)
	int temp = rand() % 168 + 1;
	gamerHours = temp;

	this->setGamer(true); // This sets the isGamer bool in Student to true  
}

void GamingStudent::displayInfo() {

}

// Setters
void GamingStudent::setGameDevice(const std::string console) { gameDevice = console; }
void GamingStudent::setGamerHours(const int hours) { gamerHours = hours; }

// Getters
const std::string GamingStudent::getListOfDevices(int spot) { return listOfGameDevice[spot]; }
const std::string GamingStudent::getGameDevice() { return gameDevice; }
const int GamingStudent::getPositionOfDevice() { return positionOfDevice; }
const int GamingStudent::getGamerHours() { return gamerHours; }

