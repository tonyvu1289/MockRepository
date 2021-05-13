#include "MobileNetwork.h"

string MobileNetwork::name() const
{
    return _name;
}

vector<string> MobileNetwork::prefixes()
{
    return _prefixes;
}

MobileNetwork::MobileNetwork()
{
    _name = "";
    _prefixes = {};
}

MobileNetwork::MobileNetwork(const string&nname, const vector<string>&pprefixes)
{
    _name = nname;
    _prefixes = pprefixes;
}
