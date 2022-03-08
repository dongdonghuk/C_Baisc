#include <stdio.h>

int main()
{
	int x;
	float y;
	char ch;

	x = 100;
	y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / y);				// x가 형변환이 이루어져 float으로 계산되어진다(묵시적 형변환)
	printf("%d \n", x / (int)y);		// cast 연산자: 형변환 연산자(명시적 형변환)
	//printf("%f \n", x / 30);	쓰레기값이 나옴
	printf("%f \n", (float)x / 30);		// 명시적, 묵시적 형변환

	// 치환에서의 형변환
	y = x;
	printf("x:%d, y:%f \n", x, y);	// 결과 : x:100, y:100.000000
	
	y = 123.456;
	x = y;
	printf("x:%d, y:%f \n", x, y);	// 결과 : x:123, y:123.456001

	x = 1000;
	ch = x;
	printf(" % d, % d \n", ch, x);

	return 0;
}