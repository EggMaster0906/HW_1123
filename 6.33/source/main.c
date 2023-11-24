#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int binarySearch(int arr[], int size, int key);
void seclectionSort(int *arr, int size);
void xch(int *a, int *b);

int main(void)
{
	srand(time(NULL));
	int a[SIZE] = { 0 };
	int key;
	int target;

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 100;
	}

	seclectionSort(a, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	
	while (1)
	{
		printf("\n\nEnter a search key: ");
		scanf("%d", &key);

		target = binarySearch(a, SIZE, key);

		if (target == -1)
		{
			printf("The key number isn't in array");
		}
		else
		{
			printf("The key number is in array[%d]", target);
			break;
		}
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

int binarySearch(int arr[], int size, int key)
{
	int min = 0, max = size - 1;

	while (min <= max)
	{
		int mid = (min + max) / 2;

		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
	}
	return -1;
}

void seclectionSort(int *arr, int size)
{
	int min;
	int i, j;
	
	for (i = 0; i < size-1; i++)
	{
		min = i;
		for (j = i+1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		xch(&arr[min], &arr[i]);
	}
}

void xch(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


