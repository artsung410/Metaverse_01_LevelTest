#include <iostream>

using namespace std;

int arr[5] = { 5, 2, 4, 1, 3 };

void sortArray(int* arr, int num)
{ 
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int main(void)
{
	sortArray(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}
