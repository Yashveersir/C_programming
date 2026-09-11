/* Question: Ek program likhein jo employee records store kare aur unke naam decreasing order of salary me print kare. */

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

    // Employee details read karein
    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee ID of Emp.%d\n", i + 1);
        scanf("%d", &e[i].emp_id);
        getchar();
        printf("Enter Employee name of Emp.%d\n", i + 1);
        fgets(e[i].emp_name, 20, stdin);
        // fgets se aane wali trailing newline ko remove karein
        e[i].emp_name[strcspn(e[i].emp_name, "\n")] = 0; 
        printf("Enter salary of Emp.%d\n", i + 1);
        scanf("%d", &e[i].salary);
        printf("Enter Date of Joining(in DDMMYYYY) of Emp.%d\n", i + 1);
        scanf("%d%d%d", &e[i].dd, &e[i].mm, &e[i].yy);
    }

    // Saari details print karein
    emp *ptr;
    printf("***Details of EMPLOYEE***\n");
    printf("ID\tName\tSalary\tDOJ\n");
    for (ptr = e; ptr < e + n; ptr++)
    {
        printf("%d\t%s\t%d\t%d-%d-%d\n", ptr->emp_id, ptr->emp_name, ptr->salary, ptr->dd, ptr->mm, ptr->yy);
    }
    
    printf("Employee name according to their decreasing salary\n");

    // Salary ke basis par Selection sort (descending order)
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MIN; // INT_MIN ka use kiya kyunki hum descending order me sort kar rahe hain aur remaining me se max dhundh rahe hain
        int maxidx = i;
        for (int j = i; j < n; j++)
        {
            if (e[j].salary > min) // Sorting logic ko actually decreasing banaya gaya hai
            {
                min = e[j].salary;
                maxidx = j;
            }
        }
        
        // Salary ko swap karein
        int temp = e[maxidx].salary;
        e[maxidx].salary = e[i].salary;
        e[i].salary = temp;

        // Names ko swap karein
        char temp1[20];
        strcpy(temp1, e[maxidx].emp_name);
        strcpy(e[maxidx].emp_name, e[i].emp_name);
        strcpy(e[i].emp_name, temp1);
    }
    
    // Sorted names ko print karein
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", e[i].emp_name);
    }
    return 0;
}
