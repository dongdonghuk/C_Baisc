#include <stdio.h>


/*
int(*a1)[3] �迭������(2����), 4byte
int *a1[3] �����͹迭, 4byte * 3 = 12byte
int(*a1)[3], �Լ� ������,  4byte
*/
void myFunc(char* tmp);		// ���𹮿����� ���� Ÿ�Ը� �����ص� �ȴ�


int main()
{
	void (*fptr)(char*);	// �Լ������� ���� ���� // ������ �����Ͽ��� ���� // callback �Լ����� �ݵ�� �ʿ�!!

	printf("fptr sizeof: %d \n", sizeof(fptr));

	fptr = myFunc;

	(*fptr)("park dong hyeok");	//�Լ�ȣ��
	fptr("���Ǵ�Ʈ �ｺ�ɾ�");

	//myFunc("this is a test");

	return 0;
}

void myFunc(char *tmp)
{
	printf("myFunc(): %p, %s \n", tmp, tmp);
}