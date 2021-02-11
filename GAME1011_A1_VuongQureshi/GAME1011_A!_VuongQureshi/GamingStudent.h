#pragma once
#ifndef __GAMINGSTUDENT_H__
#define __GAMINGSTUDENT_H__

#include "Student.h"

class GamingStudent : public Student
{
private:
	// Arrays
	std::string listOfGameDevice[8] = { "PS5", "KFC Console", "GameCube", "PS2", "Google Stavia", "SouljaGame", "DS lite", "PSP"};
	
	std::string gameDevice; 
	int gamerHours;

public:

	GamingStudent();

	// Setters
	void setGameDevice(std::string console);
	void setGamerHours(int hours);
	
	// Getters
	std::string getGameDevice();
	int getGamerHours();
};

#endif
