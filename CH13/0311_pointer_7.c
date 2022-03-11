#include <stdio.h>

int main()
{
	int a, b[3], x1[3][5], x2[6][3], x3[2][5];
	int* p1;		//포인터변수 : 변수의 시작주소 또는 1차원 배열의 시작주소가 대상
	int(*p2)[5];	//배열포인터 변수(2차원 배열 포인터) : 2차원 정ㅇ수형 배열 중에서 열의크기가 5열인 배열의 시작주소가 대상

	printf("%d, %d \n", sizeof(p1), sizeof(p2));

	p1 = &a;
	p1 = b;
	p1 = x1;
	p1 = x2;
	p1 = x3;

	p2 = &a;
	p2 = b;
	p2 = x1;
	p2 = x2;
	p2 = x3;

	printf("p2: %u \n", p2);
	p2++;
	printf("p2: %u \n", p2);
	p2++;
	printf("p2: %u \n", p2);
	p2++;

	return 0;
}