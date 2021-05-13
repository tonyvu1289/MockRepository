#include "TelephoneMock.h"

Telephone TelephoneMock::next()
{
	//Chọn nhà mạng
	int index = _rng.nextInt(_supportedNetwork.size());
	MobileNetwork network = _supportedNetwork[index];
	//Chọn đầu số
	vector<string> prefixes = network.prefixes();
	index = _rng.nextInt(prefixes.size());
	string prefix = prefixes[index];
	//Tạo random 7 số
	stringstream writer;
	for (int i = 0; i < 7; i++)
	{
		writer << _rng.nextInt(10);
	}
	string numbers = writer.str();
	Telephone result(network, prefix, numbers);
	return result;
}

TelephoneMock::TelephoneMock()
{
	_supportedNetwork.push_back(MobileNetwork("Viettel", { "086", "096", "097", "098", "032", "033", "034", "035", "036", "037", "038", "039" }));
	_supportedNetwork.push_back(MobileNetwork("Vinaphone", { "088", "091", "094", "083", "084", "085", "081", "082" }));
	_supportedNetwork.push_back(MobileNetwork("Mobiphone", { "089", "090", "093", "070", "079", "077", "076", "078" }));
	_supportedNetwork.push_back(MobileNetwork("Vietnamobile", { "092", "056", "058" }));
	_supportedNetwork.push_back(MobileNetwork("GMobile", { "099", "059" }));
	_supportedNetwork.push_back(MobileNetwork("Itelecom", { "087" }));
}
