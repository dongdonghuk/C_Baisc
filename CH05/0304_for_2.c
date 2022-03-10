#include <stdio.h>

int main()
{	
	int i, start, end, sum=0;
	int tmp;

	printf("start ? ");
	scanf("%d", &start);
	printf("end ? ");
	scanf("%d", &end);

	if (start > end)
	{
		tmp = start;
		start = end;
		end = tmp;
	}

	for (i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}
	if(i-1 == end)
		printf("%d 부터 %d 까지의 합 : %d \n", start, end, sum);
	else
		printf("%d 부터 %d 까지의 합 : %d \n", start, i, sum);


	return 0;
}