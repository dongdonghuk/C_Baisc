#include <stdio.h>


// ��ø ����
//goto �� ����Ͽ� ��ø�� �ݺ����� �ѹ��� Ż���ų���� �ִ�
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

move: //���̺��

	printf("end. \n");

	return 0;
}