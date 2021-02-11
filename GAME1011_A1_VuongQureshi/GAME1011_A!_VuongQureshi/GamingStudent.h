#pragma once
#ifndef __GAMINGSTUDENT_H__
#define __GAMINGSTUDENT_H__

#include "Student.h"

class GamingStudent : public Student
{
private:
	// Arrays
	std::string listOfGameDevice[8] = { "PS5", "KFC Console", "GameCube", "PS2", "Google Stavia", "SouljaGame", "DS lite", "PSP"};
	
	std::string gameDevice;	// This will hold the student's favourite gaming device
	int gamerHours;			// This will hold the amount of hours the student has spent gaming 

public:

	GamingStudent(std::string name);
	void getInformation() override;
	
	// Setters
	void setGameDevice(std::string console);
	void setGamerHours(int hours);
	
	// Getters
	const std::string getGameDevice();
	const int getGamerHours();
};

#endif
