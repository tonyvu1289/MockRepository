#pragma once
#pragma warning(disable:4996)
#include"Random.h"
#include"Fullname.h"
#include"Util.h"
#include<vector>
class FullnameMock
{
private:
	Random _rng;
	vector<string> _femaleMiddleNames;
	vector<string> _maleMiddleNames;
	vector<string> _femaleLastNames;
	vector<string> _maleLastNames;
	vector<string> _firstNames;
	vector<float> _firstNamesDistribution;
	vector<vector<string>> _maleCombination;
	vector<vector<string>> _femaleCombination;

public:
	static const bool male = 1;
	static const bool female = 0;
	Fullname next(const bool&);
	FullnameMock();
};

