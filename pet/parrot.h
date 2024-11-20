#pragma once
#include "pets.h"

class parrot : public pets
{
private:
	int flightDuration;
public:
	parrot(const string& name, double weight, int flightDuration)
		:pets(name, weight), flightDuration{flightDuration}
	{}

	void get_flightDuration();
};

