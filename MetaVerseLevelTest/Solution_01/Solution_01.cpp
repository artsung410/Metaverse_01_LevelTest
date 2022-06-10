#include <iostream>

void swap(int* a, int* b)
{
	int* temp = a;
	a = b;
	b = temp;
}

void swap(int& a, int& b)
{
	int tempA = 0;
	int tempB = 0;

	tempA = a;
	tempB = b;

	a = tempB;
	b = tempA;
}
