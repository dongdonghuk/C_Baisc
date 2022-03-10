#include <stdio.h>

// 구구단표 출력


int main()
{
	int i, dan;

	for (dan = 2; dan <= 9; dan++)
	{
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %2d, ", dan, i, dan * i);
		printf("\n");
	}

	printf("\n");

	for (dan = 1; dan <= 9; dan++)
	{
		for (i = 2; i <= 9; i++)
			printf("%d * %d = %2d, ", i, dan, dan * i);
		printf("\n");
	}

	printf("\n");

	//while 로 변경
	dan = 2;
	while ( dan <= 9)
	{	
		i = 1;
		while (i <= 9)
		{ 
			printf("%d * %d = %2d, ", dan, i, dan * i);
			i++;
		}
		printf("\n");
		dan++;
	}

	return 0;
}