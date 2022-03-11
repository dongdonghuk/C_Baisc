#include <stdio.h>

/*
int (*a1)[3] -> 배열포인터, 4
int *a2[3]   -> 포인터배열, 12
*/

int main()
{
	int num[3] = { 100, 200, 300 }, i;
	int* p1[3]; //포인터 배열
	char* p2[] = { "kingdom", "multi campus", "hello world", "one 하나", "two 둘", "서울시 강남구 역삼동 100", NULL}; // unsized arrray


	printf("sizeof p1: %d \n", sizeof(p1));
	printf("sizeof p2: %d \n", sizeof(p2));

	for (i = 0; p2[i]; i++)	// p2 마지막에 null 포인트가 있어 관리하기 쉬움
		printf("%p, %s \n", p2[i], p2[i]);

	//p1 주소 저장
	for (i = 0; i < 3; i++)
		p1[i] = num + i;

	//p1을 사용하여 100,200,300 출력
	for (i = 0; i < 3; i++)
		printf("%d, ", *p1[i]);

	printf("\n");

	return 0;
}