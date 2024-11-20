#pragma once
#include <iostream>
#include <string>
using namespace std;

class pets
{
private:
	string name;
	double weight;
public:
	pets(const string& name, double weight)
		:name{ name }, weight{ weight }
	{}

	void get_name();
	void get_weight();
};

