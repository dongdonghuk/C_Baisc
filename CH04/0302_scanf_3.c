#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

// scanf, getchar, gets -> �Է��Լ�(Ű����) -> ���ι��� �Լ�

int main(void)
{
	//func_1();
	//func_2();
	func_3();

	return 0 ;
}


void func_1(void)
{
    int first, second;
	
	printf("�� ���� �Է��ϼ��� ? ");
	scanf("%d%d", &first, &second);			// �����͸� space,tab,enter �ε� ���� ����

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op=0;
	 
	 printf("��ȭ��ȣ�� �Է��ϼ��� ? ");	//1234-5678
	 //scanf("%d%c%d", &first, &op,  &second);
	 scanf("%d%*c%d", &first,  &second);

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3(void)
{
     int first, second;
	 
	 printf("5�ڸ��̻� ���ڸ� �Է��ϼ��� ? ");	//12345678
	 scanf("%3d%d", &first, &second);
	 
	 printf("first : %d, second : %d \n", first, second);
}

