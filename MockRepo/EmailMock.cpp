#include "EmailMock.h"

EmailMock::EmailMock()
{
	_domains = { "yahoo.com","hcmus.edu.vn","gmail.com","github.com","outlook.com" };
}

string EmailMock::next()
{
	Fullname fname;
	fname = _namestore.next(_rng.nextInt(2));
	string first = fname.getFirstName().substr(0,1);
	string mid = fname.getMiddleName().substr(0,1);
	string last = fname.getLastname();
	stringstream writter;
	writter << first << mid << last << "@" << _domains[_rng.nextInt(_domains.size())];
	return writter.str();
}

string EmailMock::next(const Fullname& fname)
{
	string first = fname.getFirstName().substr(0, 1);
	string mid = fname.getMiddleName().substr(0, 1);
	string last = fname.getLastname();
	stringstream writter;
	writter << first << mid << last << "@" << _domains[_rng.nextInt(_domains.size())];
	return writter.str();
}
