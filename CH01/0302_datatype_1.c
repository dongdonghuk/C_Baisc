#include <stdio.h>
#define EQ "===================="	//��ũ�λ��
#define MSG "���Ǵ�Ʈ�ｺ�ɾ�"		//��ũ�λ��
#define SUM(x,y) x+y				//��ũ���Լ�

int main ()
{
	// ��������: ����� �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ��ϰ�, �����Ϸ����� �ڷ��� �˸���
	char ch;		// 1byte
	int num=100;		// 4byte
	double dnum;	// 8byte
	const float PI = 3.14159F;	//������ ���ȭ(�ݵ�� �ʱ�ȭ)
	
	printf("C ����� �ڷ���(DataType) \n");

	ch = 'A';
	num = 200;		// ������ �Ͻ��� �������
	dnum = 1.5;
	//PI = 15.5;

	// A,100,1.500000
	printf("ch : %c,num : %d, cnum : %0.1f \n", ch, num, dnum);

	printf("����: %d, ���� : %c \n",100,'Z');
	printf("%d + %d = %d \n", 100, 200, 100 + 200);
	printf("PI: %f \n", PI);

	printf("%s \n", EQ);
	printf("%s \n", MSG);
	printf("�� : %d \n", SUM(100,300));

	return 0;
}