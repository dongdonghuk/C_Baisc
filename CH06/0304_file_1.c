

#include <stdio.h>	// <~~~.h> �ý��� ���丮 �������
#include "file.h"	// "~~~.h"��������� ������� ȣ��
//�������
//����� ���� �������

int salary = 3500000; // ��������

int main()
{

	myName();
	myAge();
	mySal();

	printf("���ɾ� : %d \n", salary);

	return 0;
}

void myName()
{
	printf("���� : ȫ�浿 \n");
}

void myAge()
{
	printf("����: %d \n", AGE);
}