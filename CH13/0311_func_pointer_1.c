#include <stdio.h>


/*
int(*a1)[3] 배열포인터(2차원), 4byte
int *a1[3] 포인터배열, 4byte * 3 = 12byte
int(*a1)[3], 함수 포인터,  4byte
*/
void myFunc(char* tmp);		// 선언문에서는 변수 타입만 전달해도 된다


int main()
{
	void (*fptr)(char*);	// 함수포인터 변수 선언 // 선언문은 컴파일에서 동작 // callback 함수에서 반드시 필요!!

	printf("fptr sizeof: %d \n", sizeof(fptr));

	fptr = myFunc;

	(*fptr)("park dong hyeok");	//함수호출
	fptr("인피니트 헬스케어");

	//myFunc("this is a test");

	return 0;
}

void myFunc(char *tmp)
{
	printf("myFunc(): %p, %s \n", tmp, tmp);
}