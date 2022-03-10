

#include <stdio.h>	// <~~~.h> 시스템 디렉토리 헤더파일
#include "file.h"	// "~~~.h"사용자정의 헤더파일 호출
//헤더파일
//사용자 정의 헤더파일

int salary = 3500000; // 전역변수

int main()
{

	myName();
	myAge();
	mySal();

	printf("수령액 : %d \n", salary);

	return 0;
}

void myName()
{
	printf("성명 : 홍길동 \n");
}

void myAge()
{
	printf("나이: %d \n", AGE);
}