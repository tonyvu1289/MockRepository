#include "Address.h"

string Address::toString() const
{
	return _number+" "+_street+", "+_ward + ", " + _district + ", " +  _city;
}

Address::Address()
{
	_number = "";
	_street = "";
	_ward = "";
	_district = "";
	_city = "";
}

Address::Address(const string&num, const string&street, const string&ward, const string&dis, const string&city)
{
	_number = num;
	_street = street;
	_ward = ward;
	_district = dis;
	_city = city;
}

string Address::getDistrict()
{
	return _district;
}
