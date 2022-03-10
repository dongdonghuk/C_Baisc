#include "file.h"	// 각각의 파일에 각각의 라이브러리 호출이 필요하다
#include <stdio.h>

extern int salary;
//extern 으로 선언한 변수는 메모리 할당을 받지않고
//컴파일러에게 변수의 존재와 자료형만 알린다
	
void mySal()
{
	//printf("수당: %d \n", SUDANG);
	salary += SUDANG;
}