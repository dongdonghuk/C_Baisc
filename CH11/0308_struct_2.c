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
	struct EMPLOYEE emps[EMP_SZ], *ptr;
	int i, Cn=0;

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

	ptr = emps;

	while (1)
	{
		if (!strcmp(ptr->name, "end"))
			break;
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);

		ptr++;
		
	}
	
	return 0;
}