#pragma once
#include"StudentMock.h"

class StudentManager
{
private:
	vector<Student> data;
	StudentMock studentStore;
public:
	StudentManager();
	StudentManager(const int& n);

	vector<Student> isBornOnMonth(const int& month) const;
	vector<Student> useMobileNetWork(const string&) const;
	vector<Student> useEmailDomain(const string&) const;
	vector<Student> liveInDistrict(const string&) const;
};

