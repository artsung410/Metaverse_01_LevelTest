#include <iostream>
#include <vector>

using namespace std;

//로또 번호 정하기
// 1. [1, maxValue] 사이의 값으로 무작위 뽑느다. 뽑은 값을 N이라고 한다.
// 2. 중복인지 확인한다.
// 3. 2 - 중복이면? 1번을 다시 수행한다.
// 2. 2. 중복이 아니면? 데이터를 저장한다.
// 3. 1번부터 digitCount만큼 반복한다.

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

	cout << "로또번호 최댓값을 입력하시오_ "; cin >> maxNum;
	cout << "생성숫자의 갯수를 입력하시오_ "; cin >> amount;

	int* arr = new int[amount];
	LottoGenerator(arr, maxNum, amount);

	return 0;
}



// 출력 : 로또 번호 출력
