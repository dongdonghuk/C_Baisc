#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;

    //save
    fp = fopen("data1.txt", "at");      // "wt" => "w"
    if(fp == NULL)
    {
        printf("file open error. \n");
        exit(1);    // 프로그램 즉시종료
    }

    puts("stdin -> disk");
    while ((ch = fgetc(stdin)) != EOF)
        fputc(ch, fp);  // ctrl + z

    fclose(fp);

    // load
    fp = fopen("data1.txt", "rt");
    if(fp == NULL)
    {
        printf("file open error. \n");
        exit(1);    // 프로그램 즉시종료
    }

    puts("disk -> stdout");
    while ((ch = fgetc(stdin)) != EOF)
        fputc(ch, stdout);  // ctrl + z

    fclose(fp);

    return 0;
}