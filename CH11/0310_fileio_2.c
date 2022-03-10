#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;
    FILE *in, *out;

    in = fopen("data1.txt", "rt");
    if(in == NULL)
    {
        printf("file open error. \n");
        exit(1);    // 프로그램 즉시종료
    }

    out = fopen("data1.bak", "wt");
    if(out == NULL)
    {
        printf("file open error. \n");
        exit(1);    // 프로그램 즉시종료
    }

    // 파일복사
    while((ch = fgetc(in)) != EOF)
        fputc(ch, out);

    fclose(in);
    fclose(out);

    printf("data1.bak 파일복사. \n");

    return 0;
}