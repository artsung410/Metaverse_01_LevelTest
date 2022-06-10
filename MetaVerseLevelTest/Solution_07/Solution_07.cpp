#include <iostream>
#include <windows.h>

using namespace std;
int arr[100] = { 0 }; // ���� ������ ��� �迭
int arrFix[100] = { 0 }; // ����Ÿ�Ӷ� ���� �߻� �����ϴ� �迭

// ������ �迭�� �������� ��ġ�ϰ� �����.
void BinGoGenerator(const int maxNum, const int rowCount);

// ���� ������, ������, �밢������ ī��Ʈ�Ѵ�.
int result_bingoCount();

int main()
{
	int maxNumber = 25; // ������ ���Ұ���
	int rowCount = 5; // 5 x 5 �����̹Ƿ� row, coloums �����ϴ�.
	int bingoNumber = 0; // 
	int bingoCount = 0;

	srand(time(0));

	BinGoGenerator(maxNumber, rowCount);

	while (1)
	{
		for (int i = 0; i < maxNumber; i++)
		{
			if (arrFix[i] < 10)
			{
				cout << arrFix[i] << "  ";
			}

			else
			{
				cout << arrFix[i] << " ";
			}

			if (i == 4 || i == 9 || i == 14 || i == 19)
			{
				cout << endl;
			}
		}

		cout << endl;
		cout << endl;

		cout << "����" << result_bingoCount() << "���� ���� �ϼ��Ǿ����ϴ�." << endl;
		cout << "���ڸ� �Է��� �ּ���." << endl;
		cin >> bingoNumber;

		for (int i = 0; i < maxNumber; i++)
		{
			if (bingoNumber == arrFix[i])
			{
				arrFix[i] = 0;
			}
		}
		system("cls");
	}
}


void BinGoGenerator(const int maxNum, const int rowCount)
{
	for (int i = 0; i < maxNum; i++)
	{
		int ran1 = rand() % maxNum;

		if (arr[ran1] == 0)
		{
			arr[ran1] += 1;
			arrFix[i] = ran1 + 1;
		}

		else
		{
			// �迭�߿� �ߺ����� �� ���� ������ �������� ������ �ѹ� �� ������.
			while (arr[ran1] != 0)
			{
				ran1 = rand() % maxNum;
			}
			arr[ran1] += 1;
			arrFix[i] = ran1 + 1;
		}
	}
}


int result_bingoCount()
{
	int bingoCount = 0;
	int rowCount = 5;

	bool isRowBingo0 = false;
	bool isRowBingo1 = false;
	bool isRowBingo2 = false;
	bool isRowBingo3 = false;
	bool isRowBingo4 = false;

	bool isColoumBingo0 = false;
	bool isColoumBingo1 = false;
	bool isColoumBingo2 = false;
	bool isColoumBingo3 = false;
	bool isColoumBingo4 = false;

	bool isLineBingo1 = false;
	bool isLineBingo2 = false;


	// ������ ���� ī��Ʈ
	if (!isColoumBingo0)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[5 * i] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo0 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isColoumBingo1)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[5 * i + 1] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo0 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isColoumBingo2)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[5 * i + 2] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo0 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isColoumBingo3)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[5 * i + 3] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo0 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isColoumBingo4)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[5 * i + 4] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo0 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}


	// ������ ���� ī��Ʈ
	if (!isRowBingo0)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[i] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo0 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isRowBingo1)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[i + 5] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo1 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isRowBingo2)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[i + 10] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo2 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isRowBingo3)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[i + 15] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo3 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isRowBingo4)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[i + 20] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isColoumBingo4 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	// �밢�� ���� ī��Ʈ
	if (!isLineBingo1)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[6 * i] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isLineBingo1 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	if (!isLineBingo2)
	{
		int zeroCount = 0;
		for (int i = 0; i < rowCount; i++)
		{
			if (arrFix[4 * (i + 1)] == 0)
			{
				++zeroCount;
				if (zeroCount == 5)
				{
					isLineBingo2 = true;
					++bingoCount;
					zeroCount = 0;
				}
			}
		}
	}

	return bingoCount;
}

