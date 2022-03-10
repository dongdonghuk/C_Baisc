#include <stdio.h>

int main()
{
    char names[3][20];
    // 1차원 문자배열은 문자열 하나 저장한다.
    int i;

    for(i=0; i<3; i++)
    {
        printf("input name ? ");
        gets(names[i]);
    }

    for(i=0; i<3; i++)
        printf("%s \n", names[i]);

    return 0;
}