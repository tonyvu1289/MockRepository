#include "StudentMock.h"

Student StudentMock::next()
{
	stringstream writer;
	
	
	writer << _rng.nextInt(1,DateTime::currentYear() - 2000); //nam vao dai hoc, 2 chu so cuoi
	for (int i = 0; i < 6; i++)
	{
		writer << _rng.nextInt(10);
	}
	string studentID = writer.str();
	int gender = _rng.nextInt(2);
	return Student(studentID,fullnameStore.next(gender),citizenIDStore.next(),telephoneStore.next(),emailStore.next(),addressStore.next(),birthdayStore.next());
}
