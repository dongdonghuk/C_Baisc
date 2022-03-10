#include <stdio.h>

void funcA(int age);
void funcB();

int salary = 370000; //전역변수(모든 함수에 공유), 소멸되지 않는 공간에 존재

int main()
{
	int age = 27;	// 지역변수

	printf("main() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);

	return 0;
}

void funcA(int age)	// 지역변수
{
	printf("funA() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 20000000;
}

void funcB()	// 지역변수
{	
	int age = 7;
	int salary = 500;
	printf("funB() age: %d,%p salary: %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary = 1000;
}