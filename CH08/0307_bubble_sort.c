#include <stdio.h>

int main()
{
    int num[5] = {94, 9, 67, 120, 1}, tmp;
    int i,j;

    for(i=0; i <5; i++)
        printf("%d, ", num[i]);
    printf("\n");
    printf("\n ===================== \n");

    //bubble sort 버블정렬 개념
    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        if(num[j] > num[j+1])
        {
            tmp = num[j];
            num[j] = num[j+1];
            num[j+1] = tmp;
        }
    }

    printf("Sort Result. \n");
    for(i =0; i<5; i++)
        printf("%d, ", num[i]);
    printf("\n");

    return 0;
}