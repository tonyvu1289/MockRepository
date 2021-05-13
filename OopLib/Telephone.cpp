#include "Telephone.h"

MobileNetwork Telephone::network() const
{
    return _network;
}

const string Telephone::toString() const
{

    return _network.name()+ " : " + _prefix + _number;
}

Telephone::Telephone(const MobileNetwork& nnetwork, const string& pprefix, const string& nnumber)
{
    _network = nnetwork;
    _prefix = pprefix;
    _number = nnumber;
}

Telephone::Telephone()
{

}

string Telephone::number() const
{
    return _number;
}


