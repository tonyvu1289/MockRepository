#include "Student.h"

string Student::toString() const
{
    stringstream writer;
    writer << _studentID << endl;
    writer << _fullName.toString() << endl;
    writer << _citizenID << endl;
    writer << _telephone.toString() << endl;
    writer << _email << endl;
    writer << _address.toString() << endl;
    writer << _birthday.toString() << endl;
    
    return writer.str();
}

Student::Student(const string& studentID, const Fullname& name, const string& citizenID, const Telephone& telephone,const string& email, const Address& address, const DateTime& bd)
{
    _studentID=studentID ;
    _fullName = name;
    _citizenID = citizenID;
    _telephone = telephone;
    _email = email;
    _address = address;
    _birthday = bd;
}
DateTime Student::getBirthday() const
{
    return _birthday;
}
Telephone Student::getTelephone() const
{
    return _telephone;
}
string Student::getEmail() const
{
    return _email;
}
Address Student::getAddress() const
{
    return _address;
}

Student::Student()
{

}