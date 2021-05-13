#pragma once
#include<iostream>
#include<string>
#include"Telephone.h"
#include"Address.h"
#include"Fullname.h"
#include"DateTime.h"
using namespace std;
class Student
{
private:
	string _studentID;
	Fullname _fullName;
	string _citizenID;
	Telephone _telephone;
	string _email;
	Address _address;
	DateTime _birthday;
public:
	string toString() const;
	Student();
	Student(const string& studentID, const Fullname& name, const string& citizenID, const Telephone& telephone,const string& email, const Address& address, const DateTime& bd);
	DateTime getBirthday() const;
	Telephone getTelephone() const;
	string getEmail() const;
	Address getAddress() const;
};

