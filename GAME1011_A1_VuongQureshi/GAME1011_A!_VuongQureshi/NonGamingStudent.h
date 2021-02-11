#pragma once
#ifndef __NONGAMINGSTUDENT_H__
#define __NONGAMINGSTUDENT_H__
#include "Student.h"

class NonGamingStudent : public Student
{
private:

	//Streaming Services Array
	std::string listofStreamingServices[14] = {
		"Netflix",
		"Disney+",
		"Twitch",
		"YouTube",
		"Crunchyroll",
		"Hulu",
		"Amazon Prime Video",
		"FireFox", "HBO Max",
		"Sling TV",
		"Vudu",
		"ESPN+",
		"Apple TV"
	};

	std::string streamingServices;
	int streamHours;

public:
	NonGamingStudent(std::string name);
	void getInformation() override;

	//Setters
	void setStreamServices(std::string service);
	void setStreamHours(int hours);

	//Getters
	std::string getStreamServices();
	int getStreamHours();
};
#endif
