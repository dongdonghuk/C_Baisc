#include <stdio.h>

void heading();

int main()
{
    int score[5][7] = {
                        {78, 60, 95, 85},
                        {92, 43, 15, 60},
                        {56, 74, 96, 35},
                        {98, 36, 25, 47},
                        {84, 74, 89, 65},
    };
    char names[5][20] = {
                        {'a'}, {'b'}, {'c'}, {'d'}, {'e'}
    };

    int i,j;

    printf("%d, %d \n", sizeof(score[0][0]), sizeof(score));
    printf("%d, %p, %p \n", score[0][0], &score[0][0], score);
    printf("%p, %p, %p, %p, %p \n", score[0], &score[1], score[2], score[3], score[4]);

    printf("\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            //총점
            score[i][4] += score[i][j];
        }
        //평균
        score[i][5] = score[i][4] / 4;
    }
    
    // 석차 구하는 알고리즘
    for (i=0; i<5; i++)
    {
        score[i][6] = 1;
        for(j=0; j<5; j++)
        {
            if (score[i][4] < score[j][4])
            score[i][6]++;
        }
    }


    heading();
    for(i=0; i<5; i++)
    {
        printf("%s, ", names[i]);
        for(j=0; j<7; j++)
        {
            printf("%3d, ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}


void heading()
{
    printf("=============================== \n");
    printf("이름 국어 수학 영어 과학 총점 평균 석차 \n");
    printf("=============================== \n");
}