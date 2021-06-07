#pragma once
class Challenge8
{
public:
	int arrayOne[5]={ 1,2,3,4,5};
	int arrayTwo[3] = {10,20,30};
	int arraySize1=5;
	int arraySize2 = 3;
	int* apply_ALL(const int* const array1, size_t array1Size, const int* const array2, size_t array2Size);
	void print(const int* const  myArray, size_t size);
};

