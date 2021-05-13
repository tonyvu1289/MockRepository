#pragma once
class Integer
{
private:
public:
	template<class T>
	static T _gcd(const T& a, const T& b);

	static void test();
};

template<class T>
inline T Integer::_gcd(const T& a, const T& b)
{
	if (b == 0)
		return a;
	return _gcd(b, a % b);
}