#include <stdio.h>

int main()
{
	char ch='A';		// 1byte
	int num = 100;		// 4byte
	double dnum=1.5;	// 8byte
	const float PI = 3.14159F;	//������ ���ȭ(�ݵ�� �ʱ�ȭ)

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d,%d \n", sizeof(ch), sizeof(num), sizeof(PI), sizeof(dnum));
	printf("%d, %d \n", sizeof(10), sizeof(1.1));

	printf("%c, %d, %f, %lf \n", ch, num, PI, dnum);		// �������� ���
	printf("%p, %p, %p, %p \n", &ch, &num, &PI, &dnum);		// ������ �����ּ� ���

	return 0;
}