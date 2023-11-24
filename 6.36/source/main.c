#include <stdio.h>
#include <stdlib.h>

stringBackward(char *string);

int main(void)
{
	char arr[] = "HelloWorld!";

	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("%c", arr[i]);
	}

	stringBackward(arr);

	printf("\n");
	system("pause");
	return 0;
}

stringBackward(char *string)
{
	if (*string == '\0')
	{
		return;
	}

	stringBackward(string + 1);

	printf("%c", *string);
}
