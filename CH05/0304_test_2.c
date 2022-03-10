#include <stdio.h>


/*키보드로부터 정수 N을 입력받아
 1~100 사이의 N의 배수의 합과, N의 배수를 출력하시오.
 input N? 7
 7, 14, 21,... 98
 7의 배수의 합 : ???, 갯수: ??
 */
int main()
{
	//1. 변수 선언
	int N, i, num, sum=0;


	//2. 데이터 입력, N

	printf("input N? ");
	scanf("%d%*c", &N);
	num = 100 / N;


	//3.처리(반복, N의 배수 확인)

	for (i = 1; i <= num; i++)
	{
		sum += N * i;
		printf("%d, ", N * i);
	}
	printf("\n");

	//4. 출력
	printf("%d의 배수의 합 : %d 개수: %d \n", N, sum, num);

	return 0;
}