#include <stdio.h>

// ������ ���� : +, ++, -, -- (������ ������ �ڷ��� ũ�⸸ŭ ����)

main()
{
	char ch = 'A', * cp;
	int num = 100, * ip;
	float fnum = 1.1, * fp;
	double dnum = 5.8, * dp;

	cp = & ch, ip = &num, fp = &fnum, dp = &dnum;

	*cp = 'B';

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);

	ch++, num++, fnum++, dnum++;
	cp++, ip++, fp++, dp++;

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);


	
	return 0;
}