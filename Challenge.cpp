#include "Challenge.h"

namespace Challenge
{


	void firstChallenge()
	{
		int favNumber;
		std::cout << "Write your favourite number between 1 and 100" << std::endl;
		std::cin >> favNumber;

		std::cout << "Your favourite number is " << favNumber << std::endl;

	}
	void secondChallenge()
	{
		std::cout << "Cleaning service" << std::endl;
		std::string name;
		int smallRooms = 0;
		int bigRooms = 0;
		int smallroomCost = 10;
		int bigroomCost = 30;
		const double taxes = 5;
		double Total = 0;
		double Tax = 0;
		double TotalEstimate = 0;

		std::cout << "Room cost per small room:" << smallroomCost << std::endl;
		std::cout << "Room cost per big room:" << bigroomCost << std::endl;
		std::cout << "Enter your name here: " << std::endl;
		std::cin >> name;
		while (name.length() <= 2)
		{
			std::cout << "Try again!" << std::endl;
			std::cin >> name;
		}
		std::cout << "How many small rooms would you like cleaned " << name << "?" << std::endl;
		std::cout << "Please enter" << std::endl;
		std::cin >> smallRooms;
		std::cout << "How many big rooms would you like cleaned " << name << "?" << std::endl;
		std::cin >> bigRooms;
		if (bigRooms == 0 && smallRooms != 0)
		{
			bigroomCost = 0;
		}
		else if (bigRooms != 0 && smallRooms == 0)
		{
			smallroomCost = 0;
		}
		int roomCount = smallRooms + bigRooms;
		Total = (smallRooms * 1.0 * smallroomCost) + (bigRooms * 1.0 * bigroomCost);
		TotalEstimate = (Total)+(Total * taxes);
		Tax = Total * taxes;
		std::cout << "Cleaner name: " << name << "\n" << " Number of rooms to clean: " << roomCount << "\n" << std::endl;
		std::cout << "Room cost: " << Total << std::endl;
		std::cout << "Room cost estimate:" << TotalEstimate << std::endl;
		std::cout << "Taxes:" << Tax << std::endl;
	}
	void thirdChallege()
	{
		std::vector<int> vector1;
		std::vector<int> vector2;
		std::vector<std::vector<int>>vector_2D;

		vector1.push_back(10);
		vector1.push_back(20);
		vector2.push_back(100);
		vector2.push_back(200);
		vector_2D.push_back(vector1);
		vector_2D.push_back(vector2);

		std::cout << "Size of vector1 is " << vector2.size() << std::endl;
		std::cout << "First value is " << vector1.at(0) << std::endl;
		std::cout << "Second value is " << vector1.at(1) << std::endl;

		std::cout << "Size of vector2 is " << vector2.size() << std::endl;
		std::cout << "First value is " << vector2.at(0) << std::endl;
		std::cout << "Second value is " << vector2.at(1) << std::endl;

		std::cout << "Size of vector2D is " << vector_2D.size() << std::endl;
		std::cout << "First value is" << vector_2D.at(0).at(0) << std::endl;
		std::cout << "Second value is " << vector_2D.at(0).at(1) << std::endl;
		std::cout << "Third value is" << vector_2D.at(1).at(0) << std::endl;
		std::cout << "Forth value is " << vector_2D.at(1).at(1) << std::endl;

		vector1[0] = 1000;

		std::cout << "Size of vector1 is " << vector2.size() << std::endl;
		std::cout << "First value is " << vector1.at(0) << std::endl;
		std::cout << "Second value is " << vector1.at(1) << std::endl;
	}
}

namespace MiniChallenge
{
	typedef int brojStd;
	typedef double brojDupli;
	void hotelService()
	{
		std::cout << "Hotel service" << std::endl;
		std::string name;
		brojStd rooms = 0;
		const brojStd roomPrice = 30;
		const brojDupli taxes = 0.06;
		brojDupli Total = 0;
		brojDupli Tax = 0;
		brojDupli TotalEstimate = 0;
		std::cout << "Hotel California " << std::endl;
		std::cout << "Room cost per room:" << roomPrice << std::endl;
		std::cout << "Enter your name here: " << std::endl;
		std::cin >> name;
		std::cout << "How many rooms would you like to reserve " << name << "?" << std::endl;
		std::cout << "Please enter bellow" << std::endl;
		std::cin >> rooms;
		Total = rooms * 1.0 * roomPrice;
		TotalEstimate = (Total)+(Total * taxes);
		Tax = Total * taxes;
		std::cout << "Reservation name: " << name << "\n" << " Number of rooms: " << rooms << std::endl;
		std::cout << "Room cost: " << Total << std::endl;
		std::cout << "Room cost estimate:" << TotalEstimate << std::endl;
		std::cout << "Taxes:" << Tax << std::endl;
	}
}