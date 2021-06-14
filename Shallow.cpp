#include "Shallow.h"
#include <iostream>

Shallow::Shallow(int d)
{
	data = new int; //dodeljivanje prostora
	*data = d;
}

Shallow::Shallow(const Shallow& copy):data(copy.data)
{
	std::cout << "Copy constructor - shallow" << std::endl;
}

Shallow::~Shallow()
{
	delete data; //oslobadjanje prostora
	std::cout << "Destructor oslobadja podatke" << std::endl;
}

void Shallow::setData(int data_val)
{
	data = &data_val;
}



 int Shallow::getData()
 {
	 return *data;
 }

