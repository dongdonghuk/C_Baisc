#include <stdio.h>
/*
 stream : ���μ����� �ܺ���ġ���� ������ ����
 ǥ�ؽ�Ʈ�� : os ����
 stdin : Ű����, stdout : �͹̳�, stderr : �͹̳�

 c ���μ��� : Ű����� �͹̳�(���̺귯�� �Լ� ���)
 printf, putchar, puts -> ����Լ�(�͹̳�)
 scanf, getchar, gets -> �Է��Լ�(Ű����)
 */
int main()
{
	char c1 = 'A';

	putchar(c1);
	putchar('B');
	putchar(67);
	putchar('\n');


	puts("Hello world.");			//�ڵ� �ٹٲ��� �����
	puts("���Ǵ�Ʈ �ｺ�ɾ�.");

	return 0;
}