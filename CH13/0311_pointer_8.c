#include <stdio.h>

/*
int (*a1)[3] -> �迭������, 4
int *a2[3]   -> �����͹迭, 12
*/

int main()
{
	int num[3] = { 100, 200, 300 }, i;
	int* p1[3]; //������ �迭
	char* p2[] = { "kingdom", "multi campus", "hello world", "one �ϳ�", "two ��", "����� ������ ���ﵿ 100", NULL}; // unsized arrray


	printf("sizeof p1: %d \n", sizeof(p1));
	printf("sizeof p2: %d \n", sizeof(p2));

	for (i = 0; p2[i]; i++)	// p2 �������� null ����Ʈ�� �־� �����ϱ� ����
		printf("%p, %s \n", p2[i], p2[i]);

	//p1 �ּ� ����
	for (i = 0; i < 3; i++)
		p1[i] = num + i;

	//p1�� ����Ͽ� 100,200,300 ���
	for (i = 0; i < 3; i++)
		printf("%d, ", *p1[i]);

	printf("\n");

	return 0;
}