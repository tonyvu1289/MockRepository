#pragma once
#include<iostream>
#include<vector>
#include<sstream>
#include<utility>
using namespace std;
class Util
{
private:
public:
	template <class T>
	static void print(const vector<T>&);

	template <class T>
	static void swap(T& a, T& b);

	static vector<string> getToken(string str,const char& delim);
};

template <class T>
inline void Util::swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<class T>
inline void Util::print(const vector<T>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}