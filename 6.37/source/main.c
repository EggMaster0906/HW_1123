#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int findMaxmum(int arr[], int size);

int main(void)
{
	srand(time(NULL));
	int arr[SIZE + 1];

	printf("The array is: ");

	for (int i = 0; i <= SIZE; i++)
	{
		arr[i] = rand() % 100 + 1;
		printf("%d ", arr[i]);
	}

	printf("\nThe maxmum element in this array is: %d", findMaxmum(arr, SIZE));

	printf("\n");
	system("pause");
	return 0;
}

int findMaxmum(int arr[], int size)
{
	int min;
	
	if (size == 1)
	{
		return arr[0];
	}
	else
	{
		min = findMaxmum(arr + 1, size - 1);
		if (arr[0] > min)
		{
			return arr[0];
		}
		else
		{
			return min;
		}
	}
}
