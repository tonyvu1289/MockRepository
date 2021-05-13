#pragma warning(disable:4996)
#include"Student.h"
#include"StudentMock.h"
#include"StudentManager.h"
#include<iostream>
using namespace std;
int main()
{
	//freopen("students.txt", "rt", stdin);
	freopen("students.txt", "wt", stdout);
	StudentManager manager;
	cin.clear();
	cout.clear();
	freopen("CON", "rt", stdin);
	freopen("CON", "wt", stdout);
	vector<Student> res;
	cout << "Find all students that have birthday on February : \n";
	res = manager.isBornOnMonth(2);
	for (size_t i = 0; i < res.size(); i++)
	{
		cout << res[i].toString() << endl;
	}
	cout<<"--------------------------"<<endl;
	cout << "Find all students that have Viettel number: \n";
	res = manager.useMobileNetWork("Viettel");
	for (size_t i = 0; i < res.size(); i++)
	{
		cout << res[i].toString() << endl;
	}
	cout << "--------------------------" << endl;
	cout << "Find all students that use gmail: \n";
	res = manager.useEmailDomain("gmail");
	for (size_t i = 0; i < res.size(); i++)
	{
		cout << res[i].toString() << endl;
	}
	cout << "--------------------------" << endl;
	cout << "Find all students that live in District 1: \n";
	res = manager.liveInDistrict("District 1");
	for (size_t i = 0; i < res.size(); i++)
	{
		cout << res[i].toString() << endl;
	}
	cout << "--------------------------" << endl;
	system("pause");
	return 0;
}