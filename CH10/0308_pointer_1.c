#include <stdio.h>

//포인터(pointer): 실행중인 프로세스의 임의의 주소


// 포인터의 크기는 OS에 따라 정해짐 32bit: 4바이트, 64bit: 8바이트
int main()
{
	double d;	//변수(값)

	//포인터 변수의 타입은 자신이 참조할 자료형과 같아야한다!!!

	double *dp;	//포인터 변수(메모리주소)
	char *ptr;

	d = 1.5;
	printf("%lf, %p \n", d, &d);

	dp = &d;
		// 실행문 * : 포인터 연산자
	printf("%lf, %p \n", *dp, dp);

	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));

	ptr = &d;
	printf("%lf, %p \n", *ptr, ptr);

	return 0;
}