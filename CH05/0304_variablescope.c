#include <stdio.h>

void funcA(int age);
void funcB();

int salary = 370000; //��������(��� �Լ��� ����), �Ҹ���� �ʴ� ������ ����

int main()
{
	int age = 27;	// ��������

	printf("main() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);

	return 0;
}

void funcA(int age)	// ��������
{
	printf("funA() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 20000000;
}

void funcB()	// ��������
{	
	int age = 7;
	int salary = 500;
	printf("funB() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary = 1000;
}