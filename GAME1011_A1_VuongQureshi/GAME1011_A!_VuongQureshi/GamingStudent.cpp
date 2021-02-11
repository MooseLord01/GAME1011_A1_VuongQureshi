#include "GamingStudent.h"

GamingStudent::GamingStudent() {
	srand(time(NULL));

	int temp = rand() % 8 + 1;
	gameDevice = listOfGameDevice[temp];
	
	temp = rand() % 168 + 1;
}

