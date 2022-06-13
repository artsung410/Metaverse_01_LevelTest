#include <iostream>

using namespace std;

void BinGoGenerator(const int maxNum, const int rowCount);

int main()
{
    // 1. 빙고게임 판을 생성해야 함.
    // 1 - 1. 2차원 배열로 데이터를 담는다.
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

	// 1. 현재 현황을 출력
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
		cout << "현재" << bingoCount << "줄의 빙고가 완성되었습니다.";

		// 2. 사용자로부터 입력을 받는다.
		cout << "숫자를 입력해주세요. : ";
		int input;
		cin >> input;


		system("cls");

		// 3. 사용자의 입력이 유효한지 판단한다.
		if (input <= 0 || input > 25)
		{
			continue;
		}
	}

		// 5. 빙고 개수를 센다.

		// 6. 1번부터 반복한다.
	



}
