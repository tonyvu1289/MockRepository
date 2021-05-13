#pragma once
#include"DateTime.h"
#include"Random.h"
class BirthDayMock
{
private:
	Random _rng;
	int _maxAge;
	int _currentYear;
public:
	DateTime next();
	BirthDayMock();
};

