#pragma once
#include<iostream>
#include<string>
using namespace std;
class Fullname
{
private:
	string _firstname;
	string _middlename;
	string _lastname;
public:
	string toString() const;
	Fullname(const string&, const string&, const string&);
	Fullname();
};

