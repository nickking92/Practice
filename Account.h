#pragma once
#include "Account.h"
#include <string>
class Account

{
	friend void display_Acc(Account& a);
public:

	std::string name;
	int age = 0;
	int amount = 0;
	char input{};
	Account();
	Account(std::string name_val);
	Account(std::string name_val, int age_val, int amount_val, char input_val);
	Account(const Account& copyAcc);
	~Account();

	bool withdraw(long amount);
	void deposit(long amount);

	void checkAge();
	void chooseInput();
	inline long checkBalance() { return balance; };

private:

	long balance = 1000;
};