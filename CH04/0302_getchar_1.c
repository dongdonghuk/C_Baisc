#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input char ?");
	c1 = getchar();
	printf("c1: %c \n", c1);

	//fflush(stdin);
	while (getchar() != '\n');		//버퍼를 처리

	printf("input char ?");
	c2 = getchar();
	printf("c2: %c \n", c2);

	return 0;

}