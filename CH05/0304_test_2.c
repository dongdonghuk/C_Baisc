#include <stdio.h>


/*Ű����κ��� ���� N�� �Է¹޾�
 1~100 ������ N�� ����� �հ�, N�� ����� ����Ͻÿ�.
 input N? 7
 7, 14, 21,... 98
 7�� ����� �� : ???, ����: ??
 */
int main()
{
	//1. ���� ����
	int N, i, num, sum=0;


	//2. ������ �Է�, N

	printf("input N? ");
	scanf("%d%*c", &N);
	num = 100 / N;


	//3.ó��(�ݺ�, N�� ��� Ȯ��)

	for (i = 1; i <= num; i++)
	{
		sum += N * i;
		printf("%d, ", N * i);
	}
	printf("\n");

	//4. ���
	printf("%d�� ����� �� : %d ����: %d \n", N, sum, num);

	return 0;
}