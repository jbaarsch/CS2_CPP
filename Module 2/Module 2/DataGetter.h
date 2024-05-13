#pragma once
#include <iostream>
using namespace std;

class DataGetter
{
private:
public:
	DataGetter();
	int getInt(string field);
	int getInt(string field, int max, int min);
	string getString(string field);



};

