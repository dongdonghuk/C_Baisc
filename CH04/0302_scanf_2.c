#include <stdio.h>

int main()
{
	char ch;			//A
	short int n1;		//100
	int n2;				//200
	long int n3;		//30
	float fnum;			//1.1
	double dnum;		//2.5

	// 문자, 문자열 입력시 버퍼 주의 (숫자뒤에 %*c 습관 필요) or 공백 지정자 사용
	// 잘못된 자료형이 입력되어도 프로세스는 멈추지 않고 계속 진행되어 쓰레기값이 출력


	printf("input short int ? ");
	//scanf("%hd", &n1);
	scanf("%hd%*c", &n1);		//(숫자뒤에 %*c 습관 필요)

	printf("input char ? ");
	scanf(" %c", &ch);			// 공백지정자 : 입력버퍼의 space,tab, enter 를 버린다

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
