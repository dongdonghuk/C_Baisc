#include <stdio.h>

// �ڷ��� ������
int main()
{
	signed char c1 = 'A';		// ù��° ��Ʈ: sign bit(��ȣ��Ʈ)���� ���, ���� ����, ������ 7��Ʈ ������ ����
	unsigned char c2 = 97;		// unsigned : ��ȣ ��ƮX, ������ �ι�� ���� ����

	printf("%c, %d \n", c1, c1);
	printf("%c, %d \n", c2, c2);
	printf("%d, %d \n", sizeof(c1), sizeof(c2));

	short int a1;		//	%hd		 int �� �������� (=short a1)
	int a2;				//  %d
	long int a3;		//	%ld
	long long int a4;	//	%lld
	__int64 a5;

	printf("%d, %d, %d, %d, %d \n", sizeof(a1), sizeof(a2), sizeof(a3), sizeof(a4), sizeof(a5));
	
	a4 = 2800000000;
	printf("a4 : %lld \n", a4);

	float f1 = 12345678901234567890;		// float : 4byte, 6�ڸ� �̻� ����
	double d1 = 12345678901234567890;		// double : 8byte, 15�ڸ� �̻� ����
	long double d2 = 12345678901234567890;	

	printf("f1 : %f \n", f1);
	printf("d1 : %lf \n", d1);
	printf("d2 : %d, %llf \n", sizeof(d2),d2);

	return 0;
}