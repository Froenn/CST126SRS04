#include "stdafx.h"

#include <iostream>

#include "CSWoman.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact):
	name_{name}, birthYear_{birthYear}, fact_{fact}
{}

std::string CSWoman::getName() const
{
	return name_;
}

unsigned CSWoman::getBirth() const
{
	return birthYear_;
}

std::string CSWoman::getFact() const
{
	return fact_;
}
