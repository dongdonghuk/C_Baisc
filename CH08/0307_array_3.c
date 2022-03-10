#include <stdio.h>

#define ARR_SZ 5

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10}, y[10];
    int i;

    //배열복사
    for(i=0; i <10; i++)
        y[i] = x[i];

    printf("y 배열 출력: \n");
    for(i=0; i <10; i++)
        printf("%d, ", y[i]);
    printf("\n");

    //배열선언
    int a1[5];
    int a2[ARR_SZ];
    // 컴파일 오류
    // int n = 5;
    // int a3[n];
    // const int a4[n];

    // 배열초기화( 초기화시 빈 공간은 0으로 채워져있다)
    // int b1[5] = {1,2,3,4,5};
    // int b1[5] ;
    int b1[5] = {1,2,3};


    for(i=0; i <5; i++)
        printf("%d, ", b1[i]);
    printf("\n");
    printf("\n ===================== \n");

    //언사이즈 배열
    int c1[] = {1,2,3,4,5};

    printf("c1 sizeof: %d \n", sizeof(c1));

    for(i=0; i<5; i++)
        printf("%d, ",c1[i]);
    printf("\n");


    return 0;
}