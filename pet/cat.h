#pragma once
#include "pets.h"

class cat : public pets
{
private:
	int jumpHeight;
public:
	cat(const string& name, double weight, int jumpHeight)
		:pets(name, weight), jumpHeight{jumpHeight}
	{}

	void get_jumpHeight();
};

