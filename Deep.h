#pragma once
class Deep
{
public:
	Deep(int d);
	Deep(const Deep& copy);
	~Deep();
	int getData();
	//void showDeep(Deep d);
	void setData(int data);
private:
	int* data;
	
};

