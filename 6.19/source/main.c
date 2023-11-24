#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDE 6
#define TIMES 36000
#define DICE 2

int randDice();

int main(void)
{
	int list[SIDE * DICE +1] = { 0 };  // �ק�h�@�Ӧ�m�s�x 0 ������
	int dice[DICE + 1] = { 0 };
	int sum;

	srand(time(NULL));

	for (unsigned int i = 0; i <= TIMES; i++)  // �ק� <= TIMES
	{
		sum = 0;
		for (int j = 1; j <= DICE; j++)  // �ק� DICE
		{
			dice[j] = randDice();
			sum = sum + dice[j];
		}
		list[sum]++;
	}

	for (int j = 1; j <= SIDE; j++)  // �ק� SIDE
	{
		if (j == 1)  // �ק���Y���榡
		{
			printf("   ");
			for (int i = 1; i <= SIDE; i++)
			{
				printf("%-8d", i);
			}
			printf("\n");
		}
		printf(" %d ", j);

		for (int i = 1; i <= SIDE; i++)
		{
			printf("%-8d", list[i + j]);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}

int randDice()
{
	return rand() % SIDE + 1;
}
