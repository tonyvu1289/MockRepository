#pragma once
#include<iostream>
#include<algorithm>
#include<time.h>
using namespace std;
class Random
{
public:
	static bool _seeded ;
	
	int nextInt();
	int nextInt(int ceiling);
	int nextInt(int left, int right);
};