#include <stdio.h>
int main(void)
{
    typedef struct student
    {
        char name[30];
        int class;
        int roll;
        float sub1, sub2, sub3, total;
    } stu_rec;
    int n, i, sum = 0;
    printf("Enter number of students : ");
    scanf("%d", &n);
    stu_rec s[n];
    for (i = 0; i < n; i++)
    {
        getchar();
        printf("Enter name of student s.%d\n", i + 1);
        fgets(s[i].name, 30, stdin);
        printf("Enter roll number s.%d\n: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter Class s.%d\n: ", i + 1);
        scanf("%d", &s[i].class);
        printf("Enter Number of subject 1 s.%d\n: ", i + 1);
        scanf("%f", &s[i].sub1);
        printf("Enter Number of subject 2 s.%d\n: ", i + 1);
        scanf("%f", &s[i].sub2);
        printf("Enter Number of subject 3 s.%d\n: ", i + 1);
        scanf("%f", &s[i].sub3);
    }
    printf("***Student Records***\n");
    for (i = 0; i < n; i++)
    {
        sum += s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].total = sum;
        sum = 0;
    }
    printf("Name\tRoll\tClass\tTotal Marks\n");
    for (i = 0; i < n; i++)
    {
        
        printf("%s\t%d\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].class, s[i].total);
    }
    float per[n];
    for (i = 0; i < n; i++)
    {
        per[i] = (s[i].total / 3);
    }
    printf("***//STAR OF CLASS//***\n");
    for (i = 0; i < n; i++)
    {
        if (per[i] >= 90)
            printf("%s\n", s[i].name);
    }

    return 0;
}