#include <stdio.h>

//구조체(struct) : 관련이 있는 데이터들을 하나의 자료형으로 만들어
				//사용가능하게한다, 즉 사용자 정의 자료형을 만든다.

int main()
{
	//사용자 정의 자료형 선언
	typedef struct EMPLOYEE {
						char name[20];
						int salary;
						float height;
						char comAddr[50];
	} EMP;



				//구조체변수(통합자료형 변수)
	struct EMPLOYEE emps = { "홍길동", 38000000, 32, "서울시 강남구" };

	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));


	//typedef struct EMPLOYEE EMP;	//자료형이 긴 경우 typedef를 이용해 줄일 수 있다
	//struct EMPLOYEE tmp;
	EMP tmp;



/*
	printf("성명 ?");
	gets(emps.name);
	printf("월급 ?");
	scanf("%d%*c", & emps.salary);
	printf("키(신장) ?");
	scanf("%f%*c", & emps.height);
	printf("회사주소 ?");
	gets(emps.comAddr);
*/

	//printf("%s \n", salary); 변수
	//. : 구조체 멤버 연산자
	printf("%s, %d, %.2f, %s \n",emps.name, emps. salary, emps.height, emps.comAddr);

	tmp = emps;	// 구조체 변수 복사(배열과 다르게 복사가 가능하다)

	printf("%s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return 0;
}