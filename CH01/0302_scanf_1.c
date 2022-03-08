#include <stdio.h>

// 함수는 호출되면 절차지향으로 실행된다
int main()
{
	int x, y;

	//x = 100, y = 30;

	printf("input x? ");
	scanf("%d", &x);		//	메모리 주소값으로 입력	(scanf 함수 오류: sdl 검사 설정을 아니오 혹은 scanf_s사용)
	printf("input y? ");
	scanf("%d", &y);


	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y);		//나머지 연산자


	return 0;
}