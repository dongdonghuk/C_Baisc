#include <stdio.h>

int main()
{
    int count[3][4][5];
    int i,j,k;

    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            for(k=1; k<=5; k++)
                count[i][j][k] = 5*j + k;
    

    for(i=0; i<3; i++)
    {
        printf("\n %d 면 \n", i);
        for(j=0; j<4; j++)
        {
            for(k=1; k<=5; k++)
                printf("%2d, ", count[i][j][k]);
            printf("\n");
        }
    }
    return 0;
}