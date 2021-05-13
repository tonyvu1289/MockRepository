#include "Fullname.h"

string Fullname::toString() const
{
	return _firstname + " " + _middlename + " " + _lastname;
}

Fullname::Fullname(const string& first, const string& mid, const string& last)
{
    _firstname = first;
    _middlename = mid;
    _lastname = last;
}

Fullname::Fullname()
{
    _firstname = "";
    _middlename = "";
    _lastname = "";
}
