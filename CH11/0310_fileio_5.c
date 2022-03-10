#include <stdio.h>
#include <stdlib.h>

struct STUDENT{
                char name[20];
                int kor;
                int eng;
                int mat;
                float avg;
};

int main()
{
    FILE *fp;
    struct STUDENT stu = {"홍길동", 89, 91, 70}, tmp;

    //save
/*
    fp = fopen("data3.txt", "wt");

    if(fp == NULL)
    {
        printf("file open error. \n");
        exit(1);
    }

    stu.avg = (float)(stu.kor + stu.eng +stu.mat) /3;

    fprintf(fp, "%s %d %d %d %f ", stu.name, stu.kor, stu.eng, stu.mat, stu.avg);

    fclose(fp);
*/

    //load
    fp = fopen("data3.txt", "rt");

    if(fp == NULL)
    {
        printf("file open error. \n");
        exit(1);
    }

    fscanf(fp, "%s %d %d %d %f", tmp.name, &tmp.kor, &tmp.eng, &tmp.mat, &tmp.avg);

    fclose(fp);

    printf( "%s %d %d %d %.2f ", tmp.name, tmp.kor, tmp.eng, tmp.mat, tmp.avg);


    return 0;
}
