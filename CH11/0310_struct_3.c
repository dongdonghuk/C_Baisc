#include <stdio.h>
#include <string.h>

typedef struct EMPLOYEE {
    char name[20];
    int salary;
    float height;
    char comAddr[50];
} EMP;

void funcA(struct EMPLOYEE *emps);
struct EMPLOYEE funcB();

int main()
{

    struct EMPLOYEE emps = {"홍길동", 38000000, 172.5, "서울시 강남구"}, my;

    // funcA(emps); // call by value
    funcA(&emps);   // call by reference

    printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);


    my = funcB();

    printf("%s, %d, %.2f, %s \n", my.name, my.salary, my.height, my.comAddr);

    return 0;
}


/*
void funcA(struct EMPLOYEE emps)
{
    printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);

}
*/

void funcA(struct EMPLOYEE *emps)
{
    printf("%s, %d, %.2f, %s \n", (*emps).name, (*emps).salary, emps->height, emps->comAddr);

    emps->salary += 30000000;

}

struct EMPLOYEE funcB()
{
    struct EMPLOYEE tmp;

    tmp.salary = 27000000;
    tmp.height = 180;
    strcpy(tmp.name, "park");
    strcpy(tmp.comAddr, "광주광역시");

    return tmp;
    
}