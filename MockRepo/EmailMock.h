#pragma once
#include"Fullname.h"
#include"Random.h"
#include"FullnameMock.h"
#include<sstream>
#include<vector>
class EmailMock
{
private:
	Random _rng;
	vector<string> _domains;
	FullnameMock _namestore;
public:
	EmailMock();
	string next();
	string next(const Fullname&);

};

