#include <stdio.h>

int main()
{
	int x;
	float y;
	char ch;

	x = 100;
	y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / y);				// x�� ����ȯ�� �̷���� float���� ���Ǿ�����(������ ����ȯ)
	printf("%d \n", x / (int)y);		// cast ������: ����ȯ ������(����� ����ȯ)
	//printf("%f \n", x / 30);	�����Ⱚ�� ����
	printf("%f \n", (float)x / 30);		// �����, ������ ����ȯ

	// ġȯ������ ����ȯ
	y = x;
	printf("x:%d, y:%f \n", x, y);	// ��� : x:100, y:100.000000
	
	y = 123.456;
	x = y;
	printf("x:%d, y:%f \n", x, y);	// ��� : x:123, y:123.456001

	x = 1000;
	ch = x;
	printf(" % d, % d \n", ch, x);

	return 0;
}