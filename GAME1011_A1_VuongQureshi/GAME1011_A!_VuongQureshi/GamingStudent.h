#pragma once
#ifndef __GAMINGSTUDENT_H__
#define __GAMINGSTUDENT_H__

#include "Student.h"

class GamingStudent : public Student
{
protected:
	// Arrays
	std::string listOfGameDevice[8] = {
		"PS5",
		"KFC Console",
		"GameCube",
		"PS2",
		"Google Stavia",
		"SouljaGame",
		"DS lite",
		"PSP" };

	std::string gameDevice;	// This will hold the student's favourite gaming device
	int positionOfDevice;	// This will hold the position in the array of game devices that gets assigned to the student
	int gamerHours;			// This will hold the amount of hours the student has spent gaming 

public:

	GamingStudent();

	void displayInfo() final;

	// Setters
	void setGameDevice(std::string console);
	void setGamerHours(int hours);

	// Getters
	const std::string getGameDevice();
	const int getPositionOfDevice();
	const int getGamerHours();
};

#endif
