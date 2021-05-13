#pragma once
#include"MobileNetwork.h"
#include"Telephone.h"
#include"Random.h"
#include<sstream>
class TelephoneMock
{
private:
	vector<MobileNetwork> _supportedNetwork;
	Random _rng;
public:
	Telephone next();
	TelephoneMock();
};

