#include <stdio.h>

int main()
{
	char ch;			//A
	short int n1;		//100
	int n2;				//200
	long int n3;		//30
	float fnum;			//1.1
	double dnum;		//2.5

	// ����, ���ڿ� �Է½� ���� ���� (���ڵڿ� %*c ���� �ʿ�) or ���� ������ ���
	// �߸��� �ڷ����� �ԷµǾ ���μ����� ������ �ʰ� ��� ����Ǿ� �����Ⱚ�� ���


	printf("input short int ? ");
	//scanf("%hd", &n1);
	scanf("%hd%*c", &n1);		//(���ڵڿ� %*c ���� �ʿ�)

	printf("input char ? ");
	scanf(" %c", &ch);			// ���������� : �Է¹����� space,tab, enter �� ������

	printf("input  int ? ");
	scanf("%d", &n2);

	printf("input long  int ? ");
	scanf("%ld", &n3);
	
    printf("input float ? ");
	scanf("%f", &fnum);

    printf("input double ? ");
	scanf("%lf", &dnum);

	printf("%c, %hd, %d, %ld, %f,  %lf \n",
		              ch, n1, n2, n3, fnum, dnum );

	return 0 ;
}
