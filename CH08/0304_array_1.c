#include <stdio.h>


// 배열(array): 하나의 이름으로 참조되는 같은 자료형을 갖는 데이터들의 집합
//				(메모리의 연속적인 공간)
int main()
{	
	int num[5] = { 10,20,30,40,50 };
	int i;
	int sum = 0, max, min;

	num[0] = 100;
	// 첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작 주소를 가지는 포인터 상수
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
	printf("합: %d, 평균: %.2f \n", sum, (float)sum/5);
	printf("max: %d, min: %d \n", max, min);

	return 0;
}

//commit test