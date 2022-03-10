#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

int  salary[EMP_SZ], Cn = 0;    //������ ���׸�Ʈ������ 0���� �ʱ�ȭ �Ǽ� ����
char names[EMP_SZ][20], comAddr[EMP_SZ][50];

/*
Ű����κ��� ����(name,20) ����(salary), ȸ���ּ�(comAddr, 50)�� �Է¹ް� ����Ͻÿ�
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ� ������ 'end' �̸� �Է��� �����ϰ�
�Էµ� ������ ��°� ���� ����� ����Ͻÿ�
*/
int main()
{
    int choice, stop = 1;

    while (stop)
    {
        printf("\n1. ��������Է� \n");
        printf("2. ������� ��� \n");
        printf("3. ������� �˻� \n");
        printf("4. ���α׷� ���� \n");
        printf("Select ? (1~4) ");
        scanf("%d", &choice);  //1, 3, 7,.. 4, a, sample, ���ڹ迭

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

//2. ������ �Է�
emp_input()
{
    int i;
    for (i = Cn; i < EMP_SZ; i++)
    {
        printf("�̸�? (�Է�����: end) ");
        gets(names[i]);
        //��������
        if (strcmp(names[i], "end") == 0)
            break;
        printf("���� ?");
        scanf("%d%*c", &salary[i]);
        printf("ȸ���ּ� ?");
        gets(comAddr[i]);
    }

    Cn = i;

}

//���
emp_output()
{
    int i, salTot = 0;

    for (i = 0; i < Cn; i++)
    {
        printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
        //������
        salTot += salary[i];
    }
    if (Cn)
    {
        //�������
        printf("============================ \n");
        printf("������� : %d \n", salTot / Cn);
        printf("============================ \n");
    }
}

//�˻� �˰���
emp_find()
{
    int i, found;
    char s_name[20];


    while (1)
    {
        printf("\n �˻��� �̸� ? ");
        gets(s_name);
        if (strcmp(s_name, 'end') == 0)
            break;

        for (i = 0; i < Cn; i++)
        {
            if (strcmp(names[i], s_name) == 0)
            {
                found = 0;
                printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
                // break; (�������� ���ɼ�)
            }
        }
        if (found)
            printf("%s, Not found!!", s_name);
    }
}
