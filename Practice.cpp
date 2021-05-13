#include "Challenge.h"

int main()
{
	//Challenge::firstChallenge();
	//Challenge::secondChallenge();
	//MiniChallenge::hotelService();
	//Challenge::thirdChallege();

	int age = 0;
	bool parents = false;
	bool ssn=false;
	bool accidents = false;
	std::cout << "How old are you?" << std::endl;
	std::cin >> age;
	if (age >= 18 || (age >= 16 && parents) && !ssn && !accidents)
	{
		accidents = true;
		parents = true;
		ssn = true;
		std::cout << "You are eligable to apply for a job as a delivery driver! " << std::endl;
	}
	else
	{
		parents = false;
		accidents = false;
		ssn = false;
		std::cout << "Sorry!You are not eligable to apply for a job as a delivery driver! " << std::endl;
	}

	return 0;
}

