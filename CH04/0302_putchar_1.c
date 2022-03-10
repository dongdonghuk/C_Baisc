#include <stdio.h>
/*
 stream : 프로세스와 외부장치간의 논리적인 연결
 표준스트림 : os 제공
 stdin : 키보드, stdout : 터미널, stderr : 터미널

 c 프로세스 : 키보드와 터미널(라이브러리 함수 사용)
 printf, putchar, puts -> 출력함수(터미널)
 scanf, getchar, gets -> 입력함수(키보드)
 */
int main()
{
	char c1 = 'A';

	putchar(c1);
	putchar('B');
	putchar(67);
	putchar('\n');


	puts("Hello world.");			//자동 줄바꿈이 실행됨
	puts("인피니트 헬스케어.");

	return 0;
}