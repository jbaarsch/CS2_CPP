#include "Car.h"
#include "Date.h"
#include "DataGetter.h"
#include <iostream>
using namespace std;

void testCar();
void demoDate();

DataGetter input;

int main() {

	demoDate();
	cout << endl << endl;

	testCar();
	
}

void demoDate() {
	
	Date day;
	day.setDay(input.getInt("day of month", 1, 31));
	day.setMonth(input.getInt("month", 1, 12));
	day.setYear(input.getInt("year"));

	cout << "You entered: " << endl;
	day.printDateNum();
	day.printDateLetter();
	day.printDateFormal();
}

void testCar() {
	Car myWifesCar;
	myWifesCar.printCar();
	Car myCar(2008, "Toyota", "Prius");
	myCar.printCar();
	myCar.accelerate();
	myCar.accelerate();
	myCar.accelerate();
	myCar.printCar();
	myCar.brake();
	myCar.printCar();
}