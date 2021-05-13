#pragma once
#include"MobileNetwork.h"
class Telephone
{
private:
	MobileNetwork _network;
	string _prefix;
	string _number;
public:
	MobileNetwork network() const;
	string number() const;
	const string toString() const;
	Telephone(const MobileNetwork&,const string&,const string&);
	Telephone();
};