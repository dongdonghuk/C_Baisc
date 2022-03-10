#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "king", s2[20] = "";

    printf("s1: %s, s2: %s \n", s1, s2);

    printf("%d, %d \n", sizeof(s1), strlen(s1));

    strcpy(s2, s1);
    printf("s1: %s, s2: %s \n", s1, s2);

    do{
        printf("input s1 ? ");
        gets(s1);   //dom, aaaaaaaaaaaaaaaaaaa
    }while (strlen(s1) + strlen(2) >= sizeof(s2));
    
    strcat(s2, s1);
    printf("s1: %s, s2: %s \n", s1, s2);

    printf("%d \n", strcmp(s1, s2));
    printf("%d \n", strcmp(s2, s1));
    printf("%d \n", strcmp("apple", "apple"));
    printf("%d \n", strcmp(s2, "kingdom"));


    return 0;
}