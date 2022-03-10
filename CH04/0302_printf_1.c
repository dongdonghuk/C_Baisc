#include <stdio.h>

// 10 -> LF, 13-> CR 모든언어에서 가능(아스키코드)
int main(void)
{
    printf("%d \n",555);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555);
    printf("/%-10d/ \n",555);
    printf("/%010d/ \n\n",555);


    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%13.2f/ \n",8192.1978);
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%5s\n", "C Language...");           // 정렬
    printf("%.5s \n\n", "C Language...");       //문자열 자리수 끊기

    printf("%d %o %x \n",67,67,67);             // 10진수, 8진수, 16진수
    printf("%d %#o %#x \n",067,067,067);
    printf("%d %#o %#x \n",0x67,0x67,0x67);



	 return 0 ;
}


/*
555
/555/
/       555/
/555       /
/0000000555/

/8192.197800/
/  8192.197800/
/      8192.20/
/8192.20      /

A 65 a 97
C Language...
C Language...
C Lan

67 103 43
55 067 0x37
103 0147 0x67
*/