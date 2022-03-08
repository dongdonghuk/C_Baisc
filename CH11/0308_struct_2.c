#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

int main()
{
	typedef struct EMPLOYEE {
		char name[20];
		int salary;
		float height;
		char comAddr[50];
	} EMP;


	//구조체변수(통합자료형 변수)
	struct EMPLOYEE emps[EMP_SZ];
	int i, Cn;

	for (i = 0; i < EMP_SZ; i++)
	{
		printf("성명 ? (입력종료: end) ");
		gets(emps[i].name);

		//if (strcmp(emps[i].name, "end") == 0)
		if (!strcmp(emps[i].name, "end"))
			break;
		printf("월급 ?");
		scanf("%d%*c", &emps[i].salary);
		printf("키(신장) ?");
		scanf("%f%*c", &emps[i].height);
		printf("회사주소 ?");
		gets(emps[i].comAddr);
		
		//Cn++; 이런 과정은 필요없는 연산이 추가되어 성능이 저하
	}

	Cn = i;

	for (i = 0; i < Cn; i++)
		printf("%s, %d, %.2f, %s \n", emps[i].name, emps[i].salary, emps[i].height, emps[i].comAddr);


	return 0;
}