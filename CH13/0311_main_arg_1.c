#include <stdio.h>

// 명령어 라인 인수 : 명령 프롬프트에서 실행파일 뒤에 쓰는 인수 리스트
//					( main 함수의 파라미터)
//					main(int argc, char *argv[]) -> 공백마다 문자열로 저장
//					argc : 명령어 라인 인자의 수
//					argv : 문자열의 주소저장(포인터 배열)

int main(int argc, char *argv[])
{
	int i;

	printf("argc: %d \n", argc);
	for (i = 0; i < argc; i++)
		printf("%p: %s \n", argv[i], argv[i]);

	return 0;
}