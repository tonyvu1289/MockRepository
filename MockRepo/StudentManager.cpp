#include "StudentManager.h"

StudentManager::StudentManager()
{
	Random rd;
	int n = rd.nextInt(5, 21);
	StudentMock studentStore;
	Student student;
	cout << n << "\n\n";
	for (int i = 0; i < n; i++)
	{
		student = studentStore.next();
		cout << student.toString() << endl;
		data.push_back(student);
	}
}

StudentManager::StudentManager(const int& n)
{
	cout << n << "\n\n";
	Student student;
	for (int i = 0; i < n; i++)
	{
		student = studentStore.next();
		cout << student.toString() << endl;
		data.push_back(student);
	}
}

vector<Student> StudentManager::isBornOnMonth(const int& month) const
{
	vector<Student> res;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].getBirthday().getMonth() == month)
			res.push_back(data[i]);
	}
	return res;
}

vector<Student> StudentManager::useMobileNetWork(const string& nw) const
{
	vector<Student> res;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].getTelephone().network().name() == nw)
			res.push_back(data[i]);
	}
	return res;
}

vector<Student> StudentManager::useEmailDomain(const string& domain) const
{
	vector<Student> res;
	for (int i = 0; i < data.size(); i++)
	{
		string temp = data[i].getEmail();
		vector<string> str_arr = Util::getToken(temp, '@');
		temp = str_arr[1];//[0]xxxx@[1]domain.xxx.xxx
		str_arr.clear();
		str_arr = Util::getToken(temp, '.');//[0]domain.xxx.xx
		temp = str_arr[0];
		if (temp == domain)
			res.push_back(data[i]);
	}
	return res;
}

vector<Student> StudentManager::liveInDistrict(const string&district) const
{
	vector<Student> res;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].getAddress().getDistrict() == district)
			res.push_back(data[i]);
	}
	return res;
}
