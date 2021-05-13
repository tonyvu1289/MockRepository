#include "CitizenIdMock.h"

CitizenIdMock::CitizenIdMock()
{
	freopen("cities.txt", "rt", stdin);
	string line;
	while (!cin.eof()) {
		getline(cin, line, '\n');
		vector<string> temp;
		temp = Util::getToken(line, ',');
		_cityCodes.push_back(temp[2]);
		temp.clear();
	}
	cin.clear();
	freopen("CON", "rt", stdin);
	_maxAge = 120;
	time_t t = time(NULL);
	tm now;
	localtime_s(&now, &t);
	_currentYear=now.tm_year + 1900;
}

string CitizenIdMock::next()
{
	stringstream writer;
	// first 3 : born city code
	writer << _cityCodes[_rng.nextInt(_cityCodes.size())];
	// 4 : century code + gender
	int byear = _currentYear - _rng.nextInt(_maxAge);
	int century = byear / 100 + 1;
	
	int female = _rng.nextInt(2); // male = 0, female = 1
	int gender = (century - 20) * 2 + female;
	writer << gender;
	// 5,6 : last 2 digits of birth year

	if (byear%100 < 10)
		writer << "0";
	writer << byear%100;
	// last 6 digits : random 1 to 99.9
	for (int i = 0; i < 6; i++)
	{
		writer << _rng.nextInt(1, 9);
	}
	return writer.str();
}

string CitizenIdMock::cityName(const string& cityCode)
{
	freopen("cities.txt", "rt", stdin);
	string line;
	while (!cin.eof()) {
		getline(cin, line, '\n');
		vector<string> temp;
		temp = Util::getToken(line, ',');
		if (temp[2] == cityCode)
		{
			cin.clear();
			freopen("CON", "rt", stdin);
			return temp[1];
		}
		temp.clear();
	}
	cin.clear();
	freopen("CON", "rt", stdin);
	return string();
}
