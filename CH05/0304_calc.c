#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1, num2;
	char op;

	while (1)
	{

		//do while ���� �Էµ� ���� �����Ҷ� �ַ� ���ȴ�
		do {
			printf("\n ���ϱ�(a), ����(s), ���ϱ�(m), ������(d), ����(q) \n");
			printf("������ ù ���ڸ� �Է��ϼ��� ");
			op = toupper(getchar());
			getchar();
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'D' && op != 'M' && op != 'Q');

		if (op == 'Q')
			break;

		printf("ù ��° �� : ");
		scanf("%d%*c", &num1);

		printf("�� ��° �� : ");
		scanf("%d%*c", &num2);   // %*c : 1 ���ڸ� ����

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D' && num2)
			printf("%d / %d = %d \n", num1, num2, num1 / num2);
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);

		//printf("����ұ�� ? (Y/N) ");
		//scanf("%c%*c", &op);
		//if (op == 'Y' || op == 'y')
		//	continue;
		//else
		//	break;



	}


	// while (getchar() != '\n);  //�Է¹��۸� ���� �߸��� �Է°� ó��


	return 0;
}

