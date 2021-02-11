#include <iostream>
#include <Windows.h>
#include "Person.h"
#include "Student.h"
#include "GamingStudent.h"

int main()
{
	std::cout << "                               [-----[Welcome to the survey]-----]" << std::endl;
	std::cout << "This program gathers data about the entertainment consumption habits between college students." << std::endl;

	GamingStudent stu("Joe Swanson");
	stu.getInformation();
	getchar();

	return 0;
}