#include <stdio.h>

// 자료형 수정자
int main()
{
	signed char c1 = 'A';		// 첫번째 비트: sign bit(부호비트)존재 양수, 음수 구분, 나머지 7비트 데이터 저장
	unsigned char c2 = 97;		// unsigned : 부호 비트X, 데이터 두배더 저장 가능

	printf("%c, %d \n", c1, c1);
	printf("%c, %d \n", c2, c2);
	printf("%d, %d \n", sizeof(c1), sizeof(c2));

	short int a1;		//	%hd		 int 는 생략가능 (=short a1)
	int a2;				//  %d
	long int a3;		//	%ld
	long long int a4;	//	%lld
	__int64 a5;

	printf("%d, %d, %d, %d, %d \n", sizeof(a1), sizeof(a2), sizeof(a3), sizeof(a4), sizeof(a5));
	
	a4 = 2800000000;
	printf("a4 : %lld \n", a4);

	float f1 = 12345678901234567890;		// float : 4byte, 6자리 이상 보장
	double d1 = 12345678901234567890;		// double : 8byte, 15자리 이상 보장
	long double d2 = 12345678901234567890;	

	printf("f1 : %f \n", f1);
	printf("d1 : %lf \n", d1);
	printf("d2 : %d, %llf \n", sizeof(d2),d2);

	return 0;
}