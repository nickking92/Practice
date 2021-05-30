#pragma once
#include<iostream>
#include <vector>
#include<algorithm>
class Challenge7
{
public:
	char print{};
	int number{};
	bool empty = false;
	std::vector<int>numList{};

	void printNumbers(std::vector<int>&numList);
	void meaning(std::vector<int>&numList);
	void addNumber(std::vector<int>&numList);
	void checkLowest(std::vector<int>&numList);
	void checkLargest(std::vector<int>&numList);
	void findNumber(std::vector<int>& numList);
	void checkSelection();
	void quit();
};

