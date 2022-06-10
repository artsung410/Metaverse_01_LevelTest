#include <iostream>

using namespace std;

int main(void)
{
	char blank = ' ';
	char star = '*';
	int h = 5;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < (h - 1) - i; j++)
		{
			cout << blank;
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << star;
		}

		cout << endl;
	}

	return 0;
}
