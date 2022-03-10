#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1, num2;
	char op;

	while (1)
	{

		//do while 문은 입력된 값을 검증할때 주로 사용된다
		do {
			printf("\n 더하기(a), 빼기(s), 곱하기(m), 나누기(d), 종료(q) \n");
			printf("연산할 첫 문자를 입력하세요 ");
			op = toupper(getchar());
			getchar();
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'D' && op != 'M' && op != 'Q');

		if (op == 'Q')
			break;

		printf("첫 번째 값 : ");
		scanf("%d%*c", &num1);

		printf("두 번째 값 : ");
		scanf("%d%*c", &num2);   // %*c : 1 문자를 무시

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D' && num2)
			printf("%d / %d = %d \n", num1, num2, num1 / num2);
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);

		//printf("계속할까요 ? (Y/N) ");
		//scanf("%c%*c", &op);
		//if (op == 'Y' || op == 'y')
		//	continue;
		//else
		//	break;



	}


	// while (getchar() != '\n);  //입력버퍼를 날려 잘못된 입력값 처리


	return 0;
}

