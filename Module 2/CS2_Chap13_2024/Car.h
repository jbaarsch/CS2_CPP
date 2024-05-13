#pragma once

#include <iostream>
using namespace std;

class Car
{
	private:
		int yearModel;
		string make;
		string model;
		int speed;
	public:
		Car();
		Car(int year, string make, string model);
		int getYearModel() { return yearModel; };
		string getMake() { return make; };
		string getModel() { return model; };
		int getSpeed() { return speed; };
		void setYearModel(int y) { yearModel = y; };
		void setMake(string m) { make = m; };
		void setModel(string m) { model = m; };
		void setSpeed(int s) { speed = s; };
		void accelerate();
		void brake();
		void printCar();
};

