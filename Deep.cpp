#include "Deep.h"
#include <iostream>

Deep::Deep(int d)
{
	data = new int;
	*data = d;
}

Deep::Deep(const Deep& copy) :Deep{ *copy.data }
{
	std::cout << "Deep copy" << std::endl;
}

Deep::~Deep()
{
	delete data;
	std::cout << "Freeing data" << std::endl;
}

int Deep::getData()
{
	return *data;
}



void Deep::setData(int data_val)
{
	*data = data_val;
}

