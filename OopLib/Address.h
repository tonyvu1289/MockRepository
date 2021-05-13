#pragma once
#include<string>
#include<iostream>
using namespace std;
class Address
{
private:
	string _number;
	string _street;
	string _ward;
	string _district;
	string _city;
public:
	string toString() const;
	Address();
	Address(const string&, const string&, const string&, const string&, const string&);
	string getDistrict();
};

