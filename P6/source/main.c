#include <stdio.h>
#include <stdlib.h>

int callByValue(int n);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);
	
	number = callByValue(number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

int callByValue(int n)
{
	return n * n * n;
}
