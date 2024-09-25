#include <iostream>
using namespace std;

#include "vehicle.h"
#include "person.h"

int main() {
	
	Car myCar("Toyota", 2023, 4);
	std::cout << "Car details: " << myCar << std::endl;

	Truck myTruck("Ford", 2020, 10);
	std::cout << "Truck details: " << myTruck << std::endl;
	
	Motorcycle myMotorcycle("Ducati", 2018, 900);
	std::cout << "Motorcycle details: " << myMotorcycle << std::endl;


	cout << endl << endl << endl <<" --------------------------------------- " << endl << endl << endl;

	

	Student johnDoe("John Doe", 22, "Computer Science");
	johnDoe.getIntroductoryMessage();
	johnDoe.study();

	Employee janeSmith("Jane Smith", 35, "Software Engineer");
	janeSmith.getIntroductoryMessage();
	janeSmith.work();
	

	return 0;
}

