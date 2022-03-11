#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

//void funCacl(int (*fp5)(int, int)) // �Լ������� ����
void funCacl(FP* fp5) // �Լ������� ����
{
	printf("funCacl(): %d \n", (*fp5)(400, 30));

}

typedef int (*FP)(int, int); //�Լ������� �ڷ��� ����
//�Լ� �����͸� typedef�� �����ϸ� �Լ������� ������ �ƴ�,
//�Լ������� �ڷ����� �ȴ�




int main()
{
	int ret;

	ret = add(100, 30);
	printf("add(): %d \n", ret);

	// 1. �Լ������� ������ ����Ͽ� sub�Լ� ȣ��
	int(*fp1)(int, int);
	fp1 = sub;
	ret = (*fp1)(100, 30);
	printf("sub(): %d \n", ret);

	//2. �����ǵ� �Լ������� �ڷ������� �Լ������� ��������
	FP fp2;
	FP fp3;

	fp2 = add;
	fp3 = sub;

	printf("add(): %d \n", (*fp2)(200, 30));
	printf("sub(): %d \n", (*fp3)(200, 30));

	//3. �����ǵ� �Լ������� �ڷ������� �Լ������� �迭 ����
	FP fp4[5];	//�Լ������� �迭
	fp4[0] = add;
	fp4[1] = sub;

	printf("add(): %d \n", (*fp4[0])(300, 30));
	printf("sub(): %d \n", (*fp4[1])(300, 30));

	//4. �Լ��� ȣ���� �� �Լ��ּҸ� ���μ��� ����
	funCacl(add);
	funCacl(sub);

	return 0;
}