#include "Challenge8.h"
#include <iostream>



//Funckija dinamicki alocira novi niz koje je velicine size=size1 * size2
//Onda vrsi petlju  za svaki element niza arr2 i mnozi ga sa elementima niza arr1 i svaki rezultat je
// je uskladisten u novi kreirani niz
int* Challenge8::apply_ALL(const int* const array1, size_t array1Size, const int* const  array2, size_t array2Size)
{
	size_t result = array1Size * array2Size;
	int* newArray = new int[result]();

	int new_pos = 0;
	for(size_t i=0; i<array1Size;i++)
	{
		for (size_t b = 0; b < array2Size; b++)
		{
			newArray[new_pos] = array1[i] * array2[b];
			new_pos++;
			std::cout << newArray[new_pos] << std::endl;
		}
	}

	return newArray;
}

void Challenge8::print(const int* const  myArray, size_t size)
{
	for(size_t i=0;i<size;i++)
	{
		std::cout << myArray[i] << std::endl;
	}
}
