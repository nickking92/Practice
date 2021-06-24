#pragma once
#include <string>

class Player
{
public:
	Player();
	Player(std::string name);
	Player(std::string name,int age,char gender);
	~Player();
	std::string getName() const;
	int getAge() const;
	char getGender() const;
	static int getNumberoFPlayer();
	void setData(std::string name, int age, char gender);

private:

	std::string name;
	int age;
	char gender;
	static int numbPlayer;

};

