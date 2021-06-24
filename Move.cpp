#include "Move.h"
#include <iostream>
Move::Move(int d)
{
	data = new int;
	*data = d;
	std::cout << "Constructor for " << d << std::endl;
}

Move::Move(const Move& m):Move(*m.data) 
{
	std::cout << "Copy constructor-deep for"<<*data << std::endl;
}

Move::Move(Move&& m) noexcept //steal the data and then null out the m pointer
	:data(m.data)
{
	m.data = nullptr;
	std::cout << "Move constructor" << std::endl;
}



Move::~Move()
{
	if (data != nullptr)
	{
		std::cout << "Destructor freeing data for" <<* data << std::endl;
	}
	else
	{
		std::cout << "Destructor freeing data for nullptr" << std::endl;
	}
	delete data;
}

void Move::setData(int d)
{
	*data = d;
}

int Move::getData()
{
	return *data;
}
