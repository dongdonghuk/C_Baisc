#include <stdio.h>

//#define white 0
//#define black 1
//#define red 2
//#define green 3
//#define blue 4

int main()
{
	typedef unsigned long int U_int;		// 사용자 지정 자료형

	unsigned long int n1 = 2700000000;
	printf("n1: %u \n", n1);

	U_int n2 = 2700000000;
	printf("n2: %u \n", n2);

	// 나열형 상수
	enum Color{ white=100, black, yellow=200,red, green, blue };	

	printf("%d, %d, %d, %d, %d \n", white, black, red, green, blue);
	printf("%d \n", yellow);

	enum Color my_color;
	my_color = blue;
	printf("%d \n", my_color);

	return 0;
}