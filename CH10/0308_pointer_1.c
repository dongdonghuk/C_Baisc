#include <stdio.h>

//������(pointer): �������� ���μ����� ������ �ּ�


// �������� ũ��� OS�� ���� ������ 32bit: 4����Ʈ, 64bit: 8����Ʈ
int main()
{
	double d;	//����(��)

	//������ ������ Ÿ���� �ڽ��� ������ �ڷ����� ���ƾ��Ѵ�!!!

	double *dp;	//������ ����(�޸��ּ�)
	char *ptr;

	d = 1.5;
	printf("%lf, %p \n", d, &d);

	dp = &d;
		// ���๮ * : ������ ������
	printf("%lf, %p \n", *dp, dp);

	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));

	ptr = &d;
	printf("%lf, %p \n", *ptr, ptr);

	return 0;
}