#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

//void funCacl(int (*fp5)(int, int)) // 함수포인터 변수
void funCacl(FP* fp5) // 함수포인터 변수
{
	printf("funCacl(): %d \n", (*fp5)(400, 30));

}

typedef int (*FP)(int, int); //함수포인터 자료형 선언
//함수 포인터를 typedef로 선언하면 함수포인터 변수가 아닌,
//함수포인터 자료형이 된다




int main()
{
	int ret;

	ret = add(100, 30);
	printf("add(): %d \n", ret);

	// 1. 함수포인터 변수를 사용하여 sub함수 호출
	int(*fp1)(int, int);
	fp1 = sub;
	ret = (*fp1)(100, 30);
	printf("sub(): %d \n", ret);

	//2. 재정의된 함수포인터 자료형으로 함수포인터 변수선언
	FP fp2;
	FP fp3;

	fp2 = add;
	fp3 = sub;

	printf("add(): %d \n", (*fp2)(200, 30));
	printf("sub(): %d \n", (*fp3)(200, 30));

	//3. 재정의된 함수포인터 자료형으로 함수포인터 배열 선언
	FP fp4[5];	//함수포인터 배열
	fp4[0] = add;
	fp4[1] = sub;

	printf("add(): %d \n", (*fp4[0])(300, 30));
	printf("sub(): %d \n", (*fp4[1])(300, 30));

	//4. 함수를 호출할 때 함수주소를 실인수로 전달
	funCacl(add);
	funCacl(sub);

	return 0;
}