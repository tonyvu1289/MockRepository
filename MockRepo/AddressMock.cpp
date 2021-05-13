#include "AddressMock.h"

Address AddressMock::next()
{
    string number = to_string(_rng.nextInt(1,pow(10, _rng.nextInt(1, 3))));
    string street = _streets[_rng.nextInt(_streets.size())];
    string ward = _wards[_rng.nextInt(_wards.size())];
    string district = _districts[_rng.nextInt(_districts.size())];
    string city = _cites[_rng.nextInt(_cites.size())];
    return Address(number,street,ward,district,city);
}

AddressMock::AddressMock()
{
    _streets = { "Nguyen Chi Thanh","Au Co","Dien Bien Phu","Cong Hoa","Tran Hung Dao","Lac Long Quan","Nguyen Thi Minh Khai","Pham Van Dong","Nguyen Van Cu","Nguyen Son","Le Thuc Hoach","Truong Sa" };
    _wards = { "Ward 1","Ward 2","Ward 3","Ward 4","Ward 5","Ben Nghe Ward","Da Kao ward","Tan Son Nhi Ward","Ward 12","Phu Tho Hoa Ward","Son Ky Ward","Binh Hung Hoa Ward" };
    _districts = { "District 1","District 5", "District 3","Tan Phu District","Tan Binh District","Go Vap District","District 2","District 9" };
    _cites = { "Ho Chi Minh cites" };
}
