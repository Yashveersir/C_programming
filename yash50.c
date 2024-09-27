#include <stdio.h>
#include <limits.h>
#include <string.h>
typedef struct Employees
{
    int emp_id;
    char emp_name[20];
    int salary;
    int dd, mm, yy;
} emp;
int main(void)
{
    int n;
    printf("Enter No of Employees : ");
    scanf("%d", &n);
    emp e[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee ID of Emp.%d\n", i + 1);
        scanf("%d", &e[i].emp_id);
        getchar();
        printf("Enter Employee name of Emp.%d\n", i + 1);
        fgets(e[i].emp_name, 20, stdin);
        printf("Enter salary of Emp.%d\n", i + 1);
        scanf("%d", &e[i].salary);
        printf("Enter Date of Joining(in DDMMYYYY) of Emp.%d\n", i + 1);
        scanf("%d%d%d", &e[i].dd, &e[i].mm, &e[i].yy);
    }

    emp *ptr;
    ptr = e;
    printf("***Details of EMPLOYEE***\n");
    printf("ID\tName\tSalary\tDOJ\n");
    for (ptr = e; ptr < e + n; ptr++)
    {
        printf("%d\t%s\t%d\t%d-%d-%d", ptr->emp_id, ptr->emp_name, ptr->salary, ptr->dd, ptr->mm, ptr->yy);
        printf("\n");
    }
    printf("Employee name according to their decreasing salary\n");

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = 0; j < n - 1; j++)
        {
            if (min > e[j].salary)
            {
                min = e[j].salary;
                minidx = j;
            }
        }
        int temp = e[minidx].salary;
        e[minidx].salary = e[i].salary;
        e[i].salary = temp;

        char temp1[20];
        strcpy(temp1, e[minidx].emp_name);
        strcpy(e[minidx].emp_name, e[i].emp_name);
        strcpy(e[i].emp_name, temp1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", e[i].emp_name);
    }
}