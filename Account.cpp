#include "Account.h"
#include <iostream>



Account::Account() :Account{"", 0,0, '\0' } 
{
	std::cout << "No args constructor" << std::endl;
};

Account::Account(std::string name_val) :Account{ name_val,0,0,'\0' }
{
	std::cout << "One arg constructor" << std::endl;
}

Account::Account(std::string name_val, int age_val, int amount_val, char input_val)
{
	std::cout << "Four args constructor" << std::endl;
}

Account::Account(const Account& copyAcc ):name(copyAcc.name),age(copyAcc.age),amount(copyAcc.amount),input(copyAcc.input)
{
	std::cout << "This is a copy" << std::endl;
}

Account::~Account()
{
	std::cout << "object destroyed" << std::endl;
}

bool Account::withdraw(long amount)
{

	bool hasMoney = (balance > 0) ? true : false;
	
	balance-=amount;
	return hasMoney;
	
}

void Account::deposit(long amount)
{
	balance += amount;
}

void Account::checkAge()
{
	std::cin >> age;
	if(age<16)
	{
		std::cout << "You are under age to have bank account" << std::endl;
	}else
	{
		chooseInput();
	}
}

void Account::chooseInput()
{
	std::cout << "What would you like to do?" << std::endl;
	std::cin >> input;
	
		switch (input)
		{
		case 'W':
		{
			std::cout << "How much money would you like to withdraw?" << std::endl;
			std::cin >> amount;
			bool hasmoney = withdraw(amount);
			if (!hasmoney)
			{
				std::cout << "You dont have that much money on you account" << std::endl;
			}
			
			else
			{
				std::cout << " Previous balance : " << balance << std::endl;
				std::cout << "Amount taken : " << amount << std::endl;
				std::cout << " Current  balance : " << balance << std::endl;
			}
		}
		break;

		case 'D':
		{
			std::cout << "How much money would you like to deposit?" << std::endl;
			std::cin >> amount;
			std::cout << " Previous balance : " << balance << std::endl;
			deposit(amount);
			std::cout << "Amount given : " << amount << std::endl;
			std::cout << " Current  balance : " << balance << std::endl;

			break;
		}
		case 'C':
		{
			std::cout << "Your balance : " << balance << std::endl;
			checkBalance();
			break;
		}

		case 'Q':
		{
			std::cout << "App terminated"<< std::endl;
			
			break;
		}
		default:
			std::cout << "Input " << input << "is not correct!" << std::endl;
			
	}
}


void display_Acc(Account &a)
{
	a.balance=4;
}
