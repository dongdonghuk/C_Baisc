#include <stdio.h>

#define STACK_SZ 5
int top = -1;

int stack[STACK_SZ];

push(int value)
{
	if (top >= STACK_SZ - 1)
	{
		printf("stack full!! \n");
		return;
	}
	stack[++top] = value;


}

int pop()
{
	if (top == -1)
	{
		printf("stack is empty!! \n");
		return -1;
	}

	return stack[top--];

}

int main()
{
	int N;

	push(10);
	push(20);
	push(30);
	push(40);
	push(50);

	//push(60);

	N = pop();
	printf("N : %d, \n", N); //50

	printf("N : %d, \n", pop()); //40
	printf("N : %d, \n", pop()); //30
	printf("N : %d, \n", pop()); //20
	printf("N : %d, \n", pop()); //10

	printf("N : %d, \n", pop()); //empty

	return 0;
}