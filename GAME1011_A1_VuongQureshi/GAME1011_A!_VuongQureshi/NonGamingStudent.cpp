#include "NonGamingStudent.h"

NonGamingStudent::NonGamingStudent() {
    //The program will randomly pick favorite streaming services
    positionOfService = rand() % 13;
    streamingService = listofStreamingServices[positionOfService];

    //This will randomly assign the hours the student spends using streaming services
    int temp = rand() % 168 + 1;
    streamingHours = temp;

    //Sets the isGamer bool to false - means the student is a non-gamer
    this->setGamer(false);
}

void NonGamingStudent::displayInfo() {

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Favourite Service: " << streamingService << std::endl;
    std::cout << "Hours spent watching entertainment: " << std::endl;
}

// Setters
void NonGamingStudent::setStreamServices(std::string console) { streamingService = console; }
void NonGamingStudent::setStreamHours(int hours) { streamingHours = hours; }

// Getters
int NonGamingStudent::getStreamHours() { return streamingHours; }
int NonGamingStudent::getPositionOfService() { return positionOfService; }
std::string NonGamingStudent::getStreamServices() { return streamingService; }
std::string NonGamingStudent::getListOfServices(int spot) { return listofStreamingServices[spot]; }