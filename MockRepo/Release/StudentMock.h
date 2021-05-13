#pragma once
#include<iostream>
#include"sstream"
#include"Random.h"
#include"FullnameMock.h"
#include"CitizenIdMock.h"
#include"TelephoneMock.h"
#include"AddressMock.h"
#include"BirthDayMock.h"
#include"EmailMock.h"
#include"Student.h"
class StudentMock
{
private:
	Random _rng;
	FullnameMock fullnameStore;
	CitizenIdMock citizenIDStore;
	TelephoneMock telephoneStore;
	AddressMock addressStore;
	BirthDayMock birthdayStore;
	EmailMock emailStore;
public:
	Student next();
};

