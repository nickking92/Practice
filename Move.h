#pragma once
class Move
{
public:
	Move(int d);
	Move(const Move& m);
	Move(Move &&m) noexcept; //Move constructor
	~Move();
	void setData(int data);
	int getData();
private:
	int* data;

};

