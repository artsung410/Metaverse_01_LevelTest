#include <iostream>
#include <vector>

using namespace std;

// 
void LottoGenerator(const int maxNum, const int resultNums)
{
	srand(time(0));
	int arr[100] = { 0 };

	for (int i = 0; i < resultNums; i++)
	{
		int ran1 = rand() % maxNum;

		if (arr[ran1] == 0)
		{
			arr[ran1] += 1;
		}

		else
		{
			// ���� �ֻ����� �ѹ� �� ������.
			while (arr[ran1] != 0)
			{
				ran1 = rand() % maxNum;
			}
			arr[ran1] += 1;
		}

		cout << ran1 + 1 << endl;
	}
}

int main(void)
{
	int maxNumber = 0;
	int resultNumber = 0;

	cout << "�ζǹ�ȣ �ִ��� �Է��Ͻÿ�_ "; cin >> maxNumber;
	cout << "���������� ������ �Է��Ͻÿ�_ "; cin >> resultNumber;

	LottoGenerator(maxNumber, resultNumber);

	return 0;
}
