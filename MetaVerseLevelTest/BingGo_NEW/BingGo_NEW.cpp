#include <iostream>

using namespace std;

void BinGoGenerator(const int maxNum, const int rowCount);

int main()
{
    // 1. ������� ���� �����ؾ� ��.
    // 1 - 1. 2���� �迭�� �����͸� ��´�.
    int board[5][5] = { 0 };
	bool isUsed[26] = { false };

	srand(time(0));
	for (int r = 0; r < 5; ++r)
	{
		for (int c = 0; c < 5; ++c)
		{
			int number = 0;
			do
			{
				number = 1 + rand() % 25;
			} while (isUsed[number]);

			board[r][c] = number;
			isUsed[number] = true;
		}
	}

	// 1. ���� ��Ȳ�� ���
	while (1)
	{
		for (int r = 0; r < 5; r++)
		{
			for (int c = 0; c < 5; c++)
			{
				cout << board[r][c] << " ";
			}
			cout << endl;
		}

		int bingoCount = 0;
		cout << "����" << bingoCount << "���� ���� �ϼ��Ǿ����ϴ�.";

		// 2. ����ڷκ��� �Է��� �޴´�.
		cout << "���ڸ� �Է����ּ���. : ";
		int input;
		cin >> input;


		system("cls");

		// 3. ������� �Է��� ��ȿ���� �Ǵ��Ѵ�.
		if (input <= 0 || input > 25)
		{
			continue;
		}
	}

		// 5. ���� ������ ����.

		// 6. 1������ �ݺ��Ѵ�.
	



}
