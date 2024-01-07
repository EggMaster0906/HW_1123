#include <stdio.h>
#include <stdlib.h>

void callByReference(int &nPtr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	callByReference(number);

	printf("\nThe new value of number is %d", number);

	printf("\n");
	system("pause");
	return 0;
}

void callByReference(int & nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}
