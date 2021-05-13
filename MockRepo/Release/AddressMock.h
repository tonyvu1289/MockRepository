#pragma once
#include<vector>
#include<string>
#include"Random.h"
#include "Address.h"
using namespace std;
class AddressMock
{
private:
	vector<string> _streets;
	vector<string> _wards;
	vector<string> _districts;
	vector<string> _cites;
	Random _rng;
public:
	Address next();
	AddressMock();
};

