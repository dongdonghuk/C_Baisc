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


	//����ü����(�����ڷ��� ����)
	struct EMPLOYEE emps[EMP_SZ], *ptr;
	int i, Cn=0;

	for (i = 0; i < EMP_SZ; i++)
	{
		printf("���� ? (�Է�����: end) ");
		gets(emps[i].name);

		//if (strcmp(emps[i].name, "end") == 0)
		if (!strcmp(emps[i].name, "end"))
			break;
		printf("���� ?");
		scanf("%d%*c", &emps[i].salary);
		printf("Ű(����) ?");
		scanf("%f%*c", &emps[i].height);
		printf("ȸ���ּ� ?");
		gets(emps[i].comAddr);
		
		//Cn++; �̷� ������ �ʿ���� ������ �߰��Ǿ� ������ ����
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