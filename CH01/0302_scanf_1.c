#include <stdio.h>

// �Լ��� ȣ��Ǹ� ������������ ����ȴ�
int main()
{
	int x, y;

	//x = 100, y = 30;

	printf("input x? ");
	scanf("%d", &x);		//	�޸� �ּҰ����� �Է�	(scanf �Լ� ����: sdl �˻� ������ �ƴϿ� Ȥ�� scanf_s���)
	printf("input y? ");
	scanf("%d", &y);


	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y);		//������ ������


	return 0;
}