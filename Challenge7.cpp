#include "Challenge7.h"

 void Challenge7::printNumbers(std::vector<int>&numList)
{

		empty = (numList.size() == 0) ? true : false;
		if (empty)
		{
			std::cout << "[] - The list is empty" << std::endl;
		}
		else {
			for (auto num : numList)
			{
				std::cout << num << " ";
			}
		}

	
}

void Challenge7::meaning(std::vector<int>&numList)
{
	
		int total = 0;
		empty = (numList.size() == 0) ? true : false;
		if (empty)
		{
			std::cout << "[] - The list is empty" << std::endl;
		}
		else {
			for (auto num : numList)
			{
				total += num;
				std::cout << "The mean is" << static_cast<double>(total) / numList.size() << std::endl;
			}
		}

	
}

void Challenge7::addNumber(std::vector<int>&numList)
{
	
		std::cout << "Please, what number would you like to add: " << std::endl;

		while (numList.size() != 5) {
			std::cin >> number;
			numList.push_back(number);
			std::cout << number << " number is added" << std::endl;
		}
		std::cout << "You have max number entries!" << std::endl;

		std::cout << "[";
		for (auto num : numList)
		{
			std::cout << num << " ";
		}
		std::cout << "]";
		std::cout << std::endl;


	
}

void Challenge7::checkLowest(std::vector<int>&numList)
{
	

		empty = (numList.size() == 0) ? true : false;
		if (empty)
		{
			std::cout << "[] - The list is empty! There are no values to check" << std::endl;
		}
		else
		{
			std::cout << "Lowest number in the list is " << *std::min_element(numList.begin(), numList.end()) << std::endl;
		}
	
}

void Challenge7::checkLargest(std::vector<int>&numList)
{
	
		empty = (numList.size() == 0) ? true : false;
		if (empty)
		{
			std::cout << "[] - The list is empty" << std::endl;
		}
		else {
			std::cout << "Highest number in the list is " << *std::max_element(numList.begin(), numList.end()) << std::endl;

		}
	
}

void Challenge7::findNumber(std::vector<int>& numList)
{
	int target;
	std::cin >> target;

	for(int i=0;i<numList.size();i++)
	if(target==numList.at(i))
	{
		std::cout<<target<<" exist in a list"<<std::endl;
	}else
	{
		std::cout << target << " doesnt exist in a list" << std::endl;
	}
}

void Challenge7::checkSelection()
{
	switch (print)
	{
	case 'P':
		printNumbers(numList);
		break;
	case 'A':
		addNumber(numList);
		break;
	case 'S':
		checkLowest(numList);
		break;
	case 'L':
		checkLargest(numList);
		break;
	case 'Q':
		quit();
		break;
	case 'F':
		findNumber(numList);
		break;

	default:
		std::cout << "Wrong selection!" << std::endl;
	};
}



void Challenge7::quit()
{
	if (print == 'Q' || print == 'q')
	{
		std::cout << "Application Closed!" << std::endl;
		return;
	}
}
