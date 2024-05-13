#include "Date.h"

Date::Date() {
	day = 1;
	month = 1;
	year = 2000;
}

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
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

