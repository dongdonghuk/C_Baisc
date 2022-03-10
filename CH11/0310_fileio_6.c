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
    struct STUDENT stu[3] = { {"파이리", 89, 91, 70},
                              {"피카츄", 30, 12, 40},
                              {"꼬부기", 53, 23, 41}
    };

    struct STUDENT tmp;


    //save

    fp = fopen("data3.dat", "ab");

    if(fp == NULL)
    {
        printf("file open error. \n");
        exit(1);
    }

    //stu.avg = (float)(stu.kor + stu.eng +stu.mat) /3;
    fwrite(&stu, sizeof(stu), 1, fp);
    fwrite(&stu, sizeof(struct STUDENT), 3, fp);

    fclose(fp);


    //load
    fp = fopen("data3.dat", "rb");

    if(fp == NULL)
    {
        printf("file open error. \n");
        exit(1);
    }

    while (1)
    {    
        if(fread(&tmp, sizeof(struct STUDENT), 1, fp) != 1)
            break;

        printf( "%s %d %d %d %.2f \n", tmp.name, tmp.kor, tmp.eng, tmp.mat, tmp.avg);
    }

    fclose(fp);

    return 0;
}
