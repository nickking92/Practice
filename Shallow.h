#pragma once
class Shallow
{
public:
	Shallow(int d);
	Shallow(const Shallow& copy);
	~Shallow();
	void setData(int data_val);
	int getData();
private:
	int* data{};

};

