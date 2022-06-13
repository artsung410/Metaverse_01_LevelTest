#include <iostream>
#include <vector>

using namespace std;

//�ζ� ��ȣ ���ϱ�
// 1. [1, maxValue] ������ ������ ������ �̴���. ���� ���� N�̶�� �Ѵ�.
// 2. �ߺ����� Ȯ���Ѵ�.
// 3. 2 - �ߺ��̸�? 1���� �ٽ� �����Ѵ�.
// 2. 2. �ߺ��� �ƴϸ�? �����͸� �����Ѵ�.
// 3. 1������ digitCount��ŭ �ݺ��Ѵ�.

void LottoGenerator(int*arr, const int maxNum, const int amount)
{
	srand(time(0));

	for (int i = 0; i < maxNum; i++)
	{
		int ran = rand() % maxNum;

		if (arr[ran] == 0)
		{
			arr[ran] += 1;
		}
		else
		{
			while (arr[ran] != 0)
			{
				ran = rand() % maxNum;
			}
			arr[ran] += 1;
		}
		cout << ran + 1 << endl;
	}

	for (int i = 0; i < maxNum; i++)
	{
		cout << arr[i] << " " << endl;
	}

	delete[] arr;
}

int main(void)
{
	int maxNum = 0;
	int amount = 0;

	cout << "�ζǹ�ȣ �ִ��� �Է��Ͻÿ�_ "; cin >> maxNum;
	cout << "���������� ������ �Է��Ͻÿ�_ "; cin >> amount;

	int* arr = new int[amount];
	LottoGenerator(arr, maxNum, amount);

	return 0;
}



// ��� : �ζ� ��ȣ ���
