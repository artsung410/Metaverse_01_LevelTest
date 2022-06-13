#include <iostream>

using namespace std;



// 로또 번호 정하기

// 1. [1, maxValue] 사이의 값으로 무작위로 뽑는다. 뽑은 값을 N이라 한다.

// 2. 중복인지 확인한다 => 인미 낙온 값이지 확인한다.
// 어디까지 저장되어 있는지?

// 2-1. 중복이면? 1번을 수행한다.


int arr[5] = { 5, 2, 4, 1, 3 };
int arr2[15] = { 7, 28, 18, 34, 32, 14, 28, 34, 13, 48, 12, 33, 23, 1, 9 };

void MySort(int* arr, int num)
{ 
	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void BubbleSort(int* arr, int size)
{
	// 버블 소트는 여러 페이즈로 이뤄지며,
	// 각 페이즈가 끝날 시 맨 끝 원소부터 정렬된다.
	for (int phase = 0; phase < size - 1; ++phase)
	{
		// 첫 번째 원소부터 비교해 나간다.
		for (int i = 0; i < size - 1 - phase; ++i)
		{
			// 정렬 조건 : 현재 원소가 다음 원소보다 클 때(오름차순)
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
			}
		}
	}
}

void selectionSort(int* arr, int size)
{
	for (int phase = 0; phase < size - 1; phase++)
	{
		int indexMin = phase;
		for (int j = phase + 1; j < size; j++)
		{
			if (arr[j] < arr[indexMin])
			{
				indexMin = j;
			}
		}
		std::swap(arr[indexMin], arr[phase]);
	}
}


int main(void)
{
	MySort(arr, 5);
	//MySort(arr2, 15);
	//SelectSort(arr2, 15);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}


