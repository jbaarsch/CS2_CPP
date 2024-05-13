#include "DataGetter.h"
#include <iostream>
#include <string>
using namespace std;

DataGetter::DataGetter() {

}

int DataGetter::getInt(string field, int min, int max) {
	int num;
	do {
		cout << "Please enter the numeric " << field << endl;
		cin >> num;
	} while (num < min || num > max);
	return num;
}

int DataGetter::getInt(string field) {
	int num;
	cout << "Please enter the numeric " << field << endl;
	cin >> num;
	return num;
}

string DataGetter::getString(string field) {
	string s;
	cout << "Please enter the numeric " << field << endl;
	getline(cin, s);
	cin.ignore();
	return s;
}





