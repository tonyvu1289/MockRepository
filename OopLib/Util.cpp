#include "Util.h"
vector<string>Util:: getToken(string str, const char& delim)
{
	vector<string> res;
	string temp;
	stringstream sstr(str);
	while (!sstr.eof())
	{
		getline(sstr, temp, delim);
		if (temp == "")
			continue;
		res.push_back(temp);
	}
	return res;
}