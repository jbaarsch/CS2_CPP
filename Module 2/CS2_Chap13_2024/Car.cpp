#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car() {
	yearModel = 2000;
	make = "default";
	model = "default";
	speed = 0;
}

Car::Car(int ym, string make, string model) {
	yearModel = ym;
	Car::make = make;
	Car::model = model;
	speed = 0;
}

void Car::accelerate() {
	speed += 5;
}

void Car::brake() {
	speed -= 5;
}

void Car::printCar() {
	cout << "A " << to_string(yearModel) << " "
		<< make << " "
		<< model << " traveling at "
		<< speed << "mph. " << endl;
}


