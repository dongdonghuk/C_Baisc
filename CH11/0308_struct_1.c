#include <stdio.h>

//����ü(struct) : ������ �ִ� �����͵��� �ϳ��� �ڷ������� �����
				//��밡���ϰ��Ѵ�, �� ����� ���� �ڷ����� �����.

int main()
{
	//����� ���� �ڷ��� ����
	typedef struct EMPLOYEE {
						char name[20];
						int salary;
						float height;
						char comAddr[50];
	} EMP;



				//����ü����(�����ڷ��� ����)
	struct EMPLOYEE emps = { "ȫ�浿", 38000000, 32, "����� ������" };

	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));


	//typedef struct EMPLOYEE EMP;	//�ڷ����� �� ��� typedef�� �̿��� ���� �� �ִ�
	//struct EMPLOYEE tmp;
	EMP tmp;



/*
	printf("���� ?");
	gets(emps.name);
	printf("���� ?");
	scanf("%d%*c", & emps.salary);
	printf("Ű(����) ?");
	scanf("%f%*c", & emps.height);
	printf("ȸ���ּ� ?");
	gets(emps.comAddr);
*/

	//printf("%s \n", salary); ����
	//. : ����ü ��� ������
	printf("%s, %d, %.2f, %s \n",emps.name, emps. salary, emps.height, emps.comAddr);

	tmp = emps;	// ����ü ���� ����(�迭�� �ٸ��� ���簡 �����ϴ�)

	printf("%s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return 0;
}