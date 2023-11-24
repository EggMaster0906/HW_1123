#include <stdio.h>
#include <stdlib.h>

void callByReference(int *n);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	callByReference(&number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

void callByReference(int *n)
{
	*n = *n * *n * *n;
}
