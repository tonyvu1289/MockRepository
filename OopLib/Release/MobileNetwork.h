#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class MobileNetwork
{
private:
	string _name;
	vector<string> _prefixes;
public:
	string name() const ; 
	vector<string> prefixes();
	MobileNetwork();
	MobileNetwork(const string&,const vector<string>&);
};

