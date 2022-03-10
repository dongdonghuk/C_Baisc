#include <stdio.h>
#include <string.h>

int main()
{
    char ch = 'A';
    char str[10] = "kingdom", tmp[100];

    printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
    printf("%c, %c, %p, %p \n", ch, str[0], &str[0], str);

    printf("%p, %s, %s \n", str, str, str+4);

    do{
        printf("input string? ");
        // scanf("%s", str);   //cam pus[enter]
        gets(tmp); //cam pus[enter] gets는 엔터를 입력버퍼에 남기지 않고 문자열 끝에 null이 저장됨
    }while (strlen(tmp) >= sizeof(str));

    strcpy(str, tmp);
    printf("str : %s \n", str);


    printf("\n");
    for(int i=0;i<10;i++)
        printf("%p, %c, %d \n", &str[i], str[i], str[i]);    

    return 0;
}