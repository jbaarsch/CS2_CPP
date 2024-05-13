#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
	private:
		string months[12] = { "January", "February", "March", "April", "May", "June", "July",
							"August", "September", "October", "November", "December" };
		int month, day, year;
	public:
		Date();
		Date(int d, int m, int y);
		void setMonth(int m) { month = m; };
		void setDay(int d) { day = d; };
		void setYear(int y) { year = y; };
		int getMonth() { return month; };
		int getYear() { return year; };
		int getDay() { return day; };
		void printDateNum() {
			cout << month << "/" << day << "/" << year << endl;
		};
		void printDateLetter() {
			cout << months[month - 1] << " " << day << ", " << year << endl;
		};
		void printDateFormal() {
			cout << day << " " << months[month - 1] << " " << year << endl;
		}
};


#endif
