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
	printf("main() ���� : %d \n", *sudang);

	funcB();

	funcD();

	return 0;
}


funcD()
{
	char* p1;

		// ���ڿ� ��� ������
	p1 = "Hello world!!";
	printf("p1 : %p, %s \n", p1, p1);
}




funcB()
{
	const float PI = 3.14159;	//������ ���ȭ

	int n1 = 100, n2 = 200;
	int* p1 = &n1;

	*p1 = 150;
	printf("n1 : %d \n", n1);	// 150

	const int* p2 = &n2;	// ������ ���ȭ
	//*p2 = 250;	// �����Ͱ� ���ȭ�Ǿ� �ٲܼ� ����
	printf("funcB() n2: %d \n", n2);	//200
}


int* funcA()
{
	static int su;
	printf("���� ? ");
	scanf("%d", &su);	//300000

	return &su;
}


//��������� ����Ͽ� ���

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
	printf("\n ��� %f \n", (float)salTot / size);
}
