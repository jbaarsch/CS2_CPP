/*  Name:  Jon Baarsch
*	CS2
*	
*/


#include <iostream>

using namespace std;

int getDay();
int getMonth();
int getYear();

class Date {

};

int main2()
{
	
}

int getDay() {
	int day;
	do {
		cout << "Please enter the numeric day of the month: " << endl;
		cin >> day;
	} while (day < 1 && day > 31);
	return day;
}

int getMonth() {
	int month;
	do {
		cout << "Please enter the numeric month: " << endl;
		cin >> month;
	} while (month < 1 || month > 12);
	return month;
}

int getYear() {
	int year;
	cout << "Please enter the year: " << endl;
	cin >> year;
	return year;
}


