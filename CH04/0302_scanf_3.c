#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

// scanf, getchar, gets -> 입력함수(키보드) -> 라인버퍼 함수

int main(void)
{
	//func_1();
	//func_2();
	func_3();

	return 0 ;
}


void func_1(void)
{
    int first, second;
	
	printf("두 수를 입력하세요 ? ");
	scanf("%d%d", &first, &second);			// 데이터를 space,tab,enter 로도 구분 가능

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op=0;
	 
	 printf("전화번호를 입력하세요 ? ");	//1234-5678
	 //scanf("%d%c%d", &first, &op,  &second);
	 scanf("%d%*c%d", &first,  &second);

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3(void)
{
     int first, second;
	 
	 printf("5자리이상 숫자를 입력하세요 ? ");	//12345678
	 scanf("%3d%d", &first, &second);
	 
	 printf("first : %d, second : %d \n", first, second);
}

