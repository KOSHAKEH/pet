#pragma once
#include <string>
#include "pets.h"

class dog : public pets
{
private:
	int bodyLength;
public:
	dog(const string& name, double weight, int bodyLength)
		:pets(name,weight), bodyLength{ bodyLength }
	{}

	void get_bodyLength();
};

