#include <stdio.h>


// ���������� : heap segment�� ���� ���� (���� �޸� �Ҵ�)

int main()
{
	// * ���������� , ** ����������
	int num, * ip, ** mip;


	printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));

	ip = &num;
	mip = &ip;

	**mip = 500;

	printf("%d, %d, %d \n\n", num, *ip, **mip);


	char* ptr[] = { "kingdom", "multi campus", "hello world", "one �ϳ�", "two ��", "����� ������ ���ﵿ 100", NULL }; // unsized arrray


	funcA(ptr);

	return 0;
}

// ptr�� ����� ���ڿ� ���
funcA(char **tmp) // tmp
{
	int i, len;
	char* ptr;

	printf("funcA() : %p, %d \n", tmp, sizeof(tmp));

	for (i = 0; tmp[i]; i++)
		printf("%s \n", tmp[i]);

	while (*tmp)
	{
		ptr = *tmp;
		len = 0;
		while (*ptr)
		{
			len++;
			ptr++;
		}
		printf("%p: %p, %s, %c, length : %d \n", tmp, *tmp, *tmp, **tmp, len);

		tmp++;
	}
}