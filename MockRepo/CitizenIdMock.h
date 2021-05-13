#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<iostream>
#include<vector>
#include<sstream>
#include"Random.h"
#include"Util.h"
using namespace std;
class CitizenIdMock
{
private:
	Random _rng;
	vector<string> _cityCodes;
	int _maxAge;
	int _currentYear;
public:
	CitizenIdMock();
	string next();
	static string cityName(const string& cityCode);
};

