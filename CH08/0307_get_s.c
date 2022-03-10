#include <stdio.h>
#include <conio.h>      //비표준 라이브러리

int main()
{

    char name[20];
    char comAddr[30];

    printf("성명 ? ");
    scanf_s("%s%*c", 20);
    printf("회사주소 ? ");
    get_s(comAddr, 30);

    printf("%s, %s \n", name, comAddr);

    return 0;
}