#pragma once
#include<iostream>
using namespace std;
template <class T>
class DynamicArray
{
private:
	T* data;
	int n; // number of element
public:
	T& operator[](const int&);
	DynamicArray(int n = 0);
	~DynamicArray();
	void input();
	void output();
	int findPos(const T& x);
	size_t size();
};

template<class T>
inline T& DynamicArray<T>::operator[](const int& i)
{
	return data[i];
}

template<class T>
inline DynamicArray<T>::DynamicArray(int nn)
{
	data = new T [nn];
	n = nn;
}

template<class T>
inline DynamicArray<T>::~DynamicArray()
{
	delete[] data;
	n = 0;
}

template<class T>
inline void DynamicArray<T>::input()
{
	if (n == 0) {
		cout << "n = "; cin >> n;
		data = new T[n];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i << "] = ";
		cin >> data[i];
	}
}

template<class T>
inline void DynamicArray<T>::output()
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i << "] = "<<data[i] << endl;
		
	}
}

template<class T>
inline int DynamicArray<T>::findPos(const T& x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == data[i])
			return i;
	}
	return -1;
}

template<class T>
inline size_t DynamicArray<T>::size()
{
	return n;
}
