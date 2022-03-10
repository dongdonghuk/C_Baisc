#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

int  salary[EMP_SZ], Cn = 0;    //데이터 세그먼트에서는 0으로 초기화 되서 시작
char names[EMP_SZ][20], comAddr[EMP_SZ][50];

/*
키보드로부터 성명(name,20) 월급(salary), 회사주소(comAddr, 50)을 입력받고 출력하시오
이때 입력되는 건수는 알지 못하며 성명이 'end' 이면 입력을 종료하고
입력된 데이터 출력과 월급 평균을 출력하시오
*/
int main()
{
    int choice, stop = 1;

    while (stop)
    {
        printf("\n1. 사원정보입력 \n");
        printf("2. 사원정보 출력 \n");
        printf("3. 사원정보 검색 \n");
        printf("4. 프로그램 종료 \n");
        printf("Select ? (1~4) ");
        scanf("%d", &choice);  //1, 3, 7,.. 4, a, sample, 문자배열

        switch (choice)
        {
        case 1: emp_input();
            break;
        case 2: emp_output();
            break;
        case 3: emp_find();
            break;
        case 4: stop = 0;
            break;
        }

        //while (getchar() != '\n');

    } //while(stop) end

    printf("End.\n");



    return 0;
}

//2. 데이터 입력
emp_input()
{
    int i;
    for (i = Cn; i < EMP_SZ; i++)
    {
        printf("이름? (입력종료: end) ");
        gets(names[i]);
        //종료조건
        if (strcmp(names[i], "end") == 0)
            break;
        printf("월급 ?");
        scanf("%d%*c", &salary[i]);
        printf("회사주소 ?");
        gets(comAddr[i]);
    }

    Cn = i;

}

//출력
emp_output()
{
    int i, salTot = 0;

    for (i = 0; i < Cn; i++)
    {
        printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
        //월급합
        salTot += salary[i];
    }
    if (Cn)
    {
        //월급평균
        printf("============================ \n");
        printf("월급평균 : %d \n", salTot / Cn);
        printf("============================ \n");
    }
}

//검색 알고리즘
emp_find()
{
    int i, found;
    char s_name[20];


    while (1)
    {
        printf("\n 검색할 이름 ? ");
        gets(s_name);
        if (strcmp(s_name, 'end') == 0)
            break;

        for (i = 0; i < Cn; i++)
        {
            if (strcmp(names[i], s_name) == 0)
            {
                found = 0;
                printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
                // break; (동명이인 가능성)
            }
        }
        if (found)
            printf("%s, Not found!!", s_name);
    }
}
