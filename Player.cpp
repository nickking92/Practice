#include "Player.h"
#include <iostream>
int Player::numbPlayer = 0;
Player::Player():Player("None",0,'\0')
{

}

Player::Player(std::string name) :Player(name, 0,'\0')
{

}

Player::Player(std::string ime, int godine,char pol):name(ime),age(godine),gender(pol)
{
	numbPlayer++;
}

Player::~Player()
{
	std::cout << "Object destroyed!" << std::endl;
}

std::string Player::getName() const
{
	return name;
}

int Player::getAge() const
{
	return age;
}

char Player::getGender() const
{
	return gender;
}

int Player::getNumberoFPlayer()
{
	return numbPlayer;
}

void Player::setData(std::string name_val, int age_val, char gender_val) 
{
	name = name_val;
	age = age_val;
	gender = gender_val;
}


