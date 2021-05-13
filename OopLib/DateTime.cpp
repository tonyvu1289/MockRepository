#include "DateTime.h"

string DateTime::toString() const
{
	stringstream writer;
	writer << _day << "/" << _month << "/" << _year;
	return writer.str();
}

DateTime::DateTime(const int&d, const int&m, const int&y)
{
	_day = d;
	_month = m;
	_year = y;
}

DateTime::DateTime()
{
	DateTime(1, 1, 0);
}

int DateTime::currentYear()
{
	time_t t = time(NULL);
	tm* p = localtime(&t);
	return 1900+p->tm_year;
}

bool DateTime::isLeapYear(const int&y) 
{
	return (y%400==0)||((y%100!=0)&&(y%4==0));
}

int DateTime::getMonth()
{
	return _month;
}
