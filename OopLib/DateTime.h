#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<sstream>
#include <time.h>
using namespace std;
class DateTime
{
private:
	int _day;
	int _month;
	int _year;
public:
	string toString() const;
	DateTime(const int&, const int&, const int&);
	DateTime();
	static int currentYear();
	static bool isLeapYear(const int&);
	int getMonth();
};

