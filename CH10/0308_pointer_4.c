#include <stdio.h>

void salCal(int* tmp, int size);
int* funcA();

int main()
{
	int salary[] = { 1500, 3000, 4500, 7000, 2700,7800, 2000, 9000 }, i;
	int size;

	size = sizeof(salary) / sizeof(salary[0]);

	//salCal(salary[0]); // call by value
	salCal(salary, size);		 // call by reference

	int* sudang;
	sudang = funcA();
	printf("main() 수당 : %d \n", *sudang);

	funcB();

	funcD();

	return 0;
}


funcD()
{
	char* p1;

		// 문자열 상수 포인터
	p1 = "Hello world!!";
	printf("p1 : %p, %s \n", p1, p1);
}




funcB()
{
	const float PI = 3.14159;	//변수를 상수화

	int n1 = 100, n2 = 200;
	int* p1 = &n1;

	*p1 = 150;
	printf("n1 : %d \n", n1);	// 150

	const int* p2 = &n2;	// 포인터 상수화
	//*p2 = 250;	// 포인터가 상수화되어 바꿀수 없다
	printf("funcB() n2: %d \n", n2);	//200
}


int* funcA()
{
	static int su;
	printf("수당 ? ");
	scanf("%d", &su);	//300000

	return &su;
}


//월급평균을 계산하여 출력

//salCal(int *tmp, int size)
//salCal(int tmp[9], int size)
//salCal(int tmp[], int size)
void salCal(int* tmp, int size)
{
	int i, salTot=0;

	printf("salCalc() :%p,  %d \n", tmp, sizeof(tmp));

	for (i = 0; i < size; i++)
	{
		//printf("%d, ", *(tmp + i));
		printf("%d, ", tmp[i]);
		salTot += *(tmp + i);
	}
	//test
	printf("\n 평균 %f \n", (float)salTot / size);
}
