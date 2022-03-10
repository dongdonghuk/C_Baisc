#include <stdio.h>

int main()
{
	int num[5] = { 100, 200, 300, 400, 500 };
	int i, * ptr;

	ptr = num;


	for (i = 0; i < 5; i++)
	{
		printf("%p: %d, %d, %d, %d \n", &num[i], num[i], *ptr+i, *(num + i), ptr[i]);	// num[2] => *(num+2)
		//printf("%p: %d, %d \n", &num[i], num[i], (*ptr+i));
		//printf("%p: %d, %d \n", &num[i], num[i], *ptr+i);	//값이 다름( 포인터 처리후 계산)
	}
	printf("%d \n", ptr[0]);
	printf("\n");

	char str[20] = "kingdom", * p2;

	p2 = str;

	printf("%c, %c, %c, %c \n", str[0], *(str+0), *(str+1), *p2);
	printf("%p, %s, %s \n", str, str, p2);
	printf("%c \n", p2[2]);

	//p2를 사용하여 k,i,n,g,d,o,m 을 출력

	for (i = 0; i < 7; i++)
		printf("%c, ", p2[i]);

	printf("\n");

	i = 0;

	while (p2[i])
	{
		printf("%c, ", p2[i]);
		i++;
	}

	printf("\n");


	while (*p2)
	{
		printf("%c, ", *p2);
		p2++;
	}
	
	printf("p2  \n");


	while (*p2)
	{
		printf("%c, ", *p2);
		p2++;
	}
	printf("\n");

	//printf("%s", *p2);
	return 0;
}