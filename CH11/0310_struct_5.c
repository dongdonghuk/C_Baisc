#include <stdio.h>

typedef struct EMPLOYEE {
    char name[20];
    int salary;
    float height;
    char comAddr[50];
} EMP;


int main()
{
    struct EMPLOYEE emps = {"홍길동", 38000000, 172.5, "서울시 강남구"};
    struct EMPLOYEE *ptr; // 구조체 포인터 변수

    printf("%d, %d \n", sizeof(emps), sizeof(ptr));

    ptr = &emps;

    // -> : 구조체 포인터 연산자
    printf("%s, %d, %.2f, %s \n",ptr->name, ptr->salary, (*ptr).height, (*ptr).comAddr);

    return 0;
}