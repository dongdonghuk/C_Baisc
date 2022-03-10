#include <stdio.h>


// 중첩 루프
//goto 를 사용하여 중첩된 반복문을 한번에 탈출시킬수도 있다
int main()
{
	char ch, i;
	char input;

	printf("input char ? ");
	input = getchar(); //H
	
	for (i = 1; i <= 3; i++)
	{
		ch = 'A';
		while (ch <= 'Z')
		{
			printf("%c ", ch);
			if (ch == input)
				//break;
				goto move;
			ch++;
		}
		printf("\n");
	}

move: //레이블명

	printf("end. \n");

	return 0;
}