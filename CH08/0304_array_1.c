#include <stdio.h>


// �迭(array): �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �����͵��� ����
//				(�޸��� �������� ����)
int main()
{	
	int num[5] = { 10,20,30,40,50 };
	int i;
	int sum = 0, max, min;

	num[0] = 100;
	// ÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� ���� �ּҸ� ������ ������ ���
	printf(" %d, %p, %p \n", num[0], &num[0], num);		
	printf(" %d, %d \n", sizeof(num[0]), sizeof(num));

	for (i = 0; i < 5; i++)
	{
		printf("%d, input ?",i+1);
		scanf("%d%*c", &num[i]);
		//scanf("%d%*c", &num[0]+ i);
	}
	printf("\n");

	max = num[0];
	min = num[0];

	for (i = 0; i < 5; i++)
	{
		printf("%d, ", num[i]);
		sum += num[i];

		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}
		//printf("%d, %p, %d \n", num[i], &num[i], &num[i]);
	printf("\n");
	printf("��: %d, ���: %.2f \n", sum, (float)sum/5);
	printf("max: %d, min: %d \n", max, min);

	return 0;
}

//commit test