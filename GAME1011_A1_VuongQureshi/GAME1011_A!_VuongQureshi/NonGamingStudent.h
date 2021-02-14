#pragma once
#ifndef __NONGAMINGSTUDENT_H__
#define __NONGAMINGSTUDENT_H__
#include "Student.h"

class NonGamingStudent : public Student
{
protected:
    //Streaming Services Array
    std::string listofStreamingServices[13] = {
        "Netflix",
        "Disney+",
        "Twitch",
        "YouTube",
        "Crunchyroll",
        "Hulu",
        "Prime Video",
        "FireFox",
        "HBO Max",
        "Sling TV",
        "Vudu",
        "ESPN+",
        "Apple TV",
    	"Tubi"
    };

    std::string streamingService;  // This will hold the student's favourite streaming service
    int positionOfService;          // This will hold the position in the array of streaming services that gets assigned to the student
    int streamingHours;             // This will hold the amount of time the student spends on non gaming entertainment in a week

public:
    NonGamingStudent();
    void displayInfo() final;

    //Setters
    void setStreamServices(std::string service);
    void setStreamHours(int hours);

    //Getters
    std::string getStreamServices();
    std::string getListOfServices(int spot);
    int getPositionOfService();
    int getStreamHours();
};
#endif