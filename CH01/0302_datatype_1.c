#include <stdio.h>
#define EQ "===================="	//매크로상수
#define MSG "인피니트헬스케어"		//매크로상수
#define SUM(x,y) x+y				//매크로함수

int main ()
{
	// 변수선언: 선언된 자료형의 크기만큼 메모리를 할당하고, 컴파일러에게 자료형 알린다
	char ch;		// 1byte
	int num=100;		// 4byte
	double dnum;	// 8byte
	const float PI = 3.14159F;	//변수를 상수화(반드시 초기화)
	
	printf("C 언어의 자료형(DataType) \n");

	ch = 'A';
	num = 200;		// 변수는 일시적 보관장소
	dnum = 1.5;
	//PI = 15.5;

	// A,100,1.500000
	printf("ch : %c,num : %d, cnum : %0.1f \n", ch, num, dnum);

	printf("정수: %d, 문자 : %c \n",100,'Z');
	printf("%d + %d = %d \n", 100, 200, 100 + 200);
	printf("PI: %f \n", PI);

	printf("%s \n", EQ);
	printf("%s \n", MSG);
	printf("합 : %d \n", SUM(100,300));

	return 0;
}