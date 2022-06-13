#include <iostream>

using namespace std;



// �ζ� ��ȣ ���ϱ�

// 1. [1, maxValue] ������ ������ �������� �̴´�. ���� ���� N�̶� �Ѵ�.

// 2. �ߺ����� Ȯ���Ѵ� => �ι� ���� ������ Ȯ���Ѵ�.
// ������ ����Ǿ� �ִ���?

// 2-1. �ߺ��̸�? 1���� �����Ѵ�.


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
	// ���� ��Ʈ�� ���� ������� �̷�����,
	// �� ����� ���� �� �� �� ���Һ��� ���ĵȴ�.
	for (int phase = 0; phase < size - 1; ++phase)
	{
		// ù ��° ���Һ��� ���� ������.
		for (int i = 0; i < size - 1 - phase; ++i)
		{
			// ���� ���� : ���� ���Ұ� ���� ���Һ��� Ŭ ��(��������)
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


