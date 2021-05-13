#include "FullnameMock.h"

Fullname FullnameMock::next(const bool& sex)
{
	int index;
	int index1;
	float rad;
	string firstname;
	string midname;
	string lastname;
	rad = float(_rng.nextInt(1000)) / float(1000);
	for (int i = 0; i < _firstNamesDistribution.size(); i++)
	{
		if (rad <= _firstNamesDistribution[i]) {
			index = i;
			break;
		}
		else if (i == _firstNamesDistribution.size() - 1)
		{
			index = 0;
		}
	}
	firstname = _firstNames[index];
	if (sex == male)
	{
		index = _rng.nextInt(_maleLastNames.size());
		lastname = _maleLastNames[index];
		if (_maleCombination[index].size() == 0)  { // means not require name combination
			index = _rng.nextInt(_maleMiddleNames.size());
			midname = _maleMiddleNames[index];
		}
		else
		{
			index1 = _rng.nextInt(_maleCombination[index].size());
			midname = _maleCombination[index][index1];
		}
	}
	if (sex == female)
	{
		index = _rng.nextInt(_femaleLastNames.size());
		lastname = _femaleLastNames[index];
		if (_femaleCombination[index].size() == 0) { // means not require name combination
			index = _rng.nextInt(_femaleMiddleNames.size());
			midname = _femaleMiddleNames[index];
		}
		else
		{
			index1 = _rng.nextInt(_femaleCombination[index].size());
			midname = _femaleCombination[index][index1];
		}
	}
	return Fullname(firstname,midname,lastname);
}

FullnameMock::FullnameMock()
{
	freopen("FullnameData.txt", "rt", stdin);
	string line = "";
	vector<string> str_arr;
	float last=0;
	while (1)
	{
		getline(cin, line, '\n');
		str_arr=Util::getToken(line, ',');
		if (str_arr.size() == 0)
			break;
		else
		{
			_firstNames.push_back(str_arr[0]);
			last += stof(str_arr[1]);
			_firstNamesDistribution.push_back(last);
		}
	}
	while (1)
	{
		getline(cin, line, '\n');
		if (line == "")
			break;
		else
			_maleMiddleNames.push_back(line);
	}
	while (1)
	{
		getline(cin, line, '\n');
		str_arr = Util::getToken(line, ',');
		if (line == "")
			break;
		else {
			_maleLastNames.push_back(str_arr[0]);
			vector<string> mid;
			for (int i = 1; i < str_arr.size(); i++)
			{
				mid.push_back(str_arr[i]);
			}
			_maleCombination.push_back(mid);
		}
	}
	while (1)
	{
		getline(cin, line, '\n');
		if (line == "")
			break;
		else
			_femaleMiddleNames.push_back(line);
	}
	while (!cin.eof())
	{
		getline(cin, line, '\n');
		str_arr = Util::getToken(line, ',');
		if (line == "")
			break;
		else {
			_femaleLastNames.push_back(str_arr[0]);
			vector<string> mid;
			for (int i = 1; i < str_arr.size(); i++)
			{
				mid.push_back(str_arr[i]);
			}
			_femaleCombination.push_back(mid);
		}
	}
	/*_maleMiddleNames = { "Tuan","Duc","Minh","Thanh","Cong","Tan","Vinh","Quoc","An" };
	_maleLastNames = { "An","Anh","Bac","Bach","Chien","Cuong","Dang","Dat","Doan","Duc","Dung","Duy","Giang","Hai" };
	_femaleMiddleNames = { "Hong","Bich","Doan","Phuong","Nha","Thanh","Thao","Thien","Ha","Tu","Chau","Truc","Mai" };
	_femaleLastNames = { "Vy","Tuong","Han","An","Thuy","Ha","Chau","Ngan","Nhung","Anh","Trinh","Phuong","Mai","Thanh","Quyen","Hanh","Binh" };*/
	cin.clear();
	freopen("CON", "rt", stdin);
}
