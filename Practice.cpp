#include "Challenge.h"
#include <string>
#include "Practice.h"
#include <cmath>
#include "Account.h"
#include "Shallow.h"
#include "Deep.h"
void showDeep(Deep d);
int main()
{

	//Challenge::firstChallenge();
	//Challenge::secondChallenge();
	//Challenge::thirdChallenge();
	//Challenge::forthCHallenge();
	//Challenge::fifthChallenge();
	//Challenge::sixthChallenge();
	//Challenge::seventhChallenge();
	//Challenge::eightChallenge();
	//MiniChallenge::hotelService();
	//MiniChallenge::canyouDrive();
	Deep d(10);
	showDeep(d);
	Deep copy(d);
	copy.setData(100);
	showDeep(copy);

}

void showDeep(Deep d)
{
	std::cout << "Data value is " << d.getData() << std::endl;
}









