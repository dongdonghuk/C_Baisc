#include <stdio.h>  //�������, �Լ�ȣ������(�����Ϸ����� ������ ����)
// # ����ó�� ���ù�(; ���� ������ ����)

// c���� �Լ��� ����


void funcA() // ȣ��� �� ����
{
	printf("funcA() called. \n");
}


int main() // ������ �Լ�(�Լ� �� main()�� �ڵ����� ����ȴ�.)
{

	printf("main() start. \n");  // ���̺귯�� �Լ� ȣ��
	funcA();  // �Լ�ȣ��
	printf("main end.\n");

	return 0;
}