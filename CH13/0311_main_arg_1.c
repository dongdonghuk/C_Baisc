#include <stdio.h>

// ��ɾ� ���� �μ� : ��� ������Ʈ���� �������� �ڿ� ���� �μ� ����Ʈ
//					( main �Լ��� �Ķ����)
//					main(int argc, char *argv[]) -> ���鸶�� ���ڿ��� ����
//					argc : ��ɾ� ���� ������ ��
//					argv : ���ڿ��� �ּ�����(������ �迭)

int main(int argc, char *argv[])
{
	int i;

	printf("argc: %d \n", argc);
	for (i = 0; i < argc; i++)
		printf("%p: %s \n", argv[i], argv[i]);

	return 0;
}