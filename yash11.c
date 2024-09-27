//convert second into no of days,hours and minutes
#include<stdio.h>
int main(void)
{
    float sec,min,hours,day;
    printf("Enter value of second=");
    scanf("%f",&sec);
    min=sec/60;
    hours=min/60;
    day=hours/24;
    printf("In minutes=%f\n",min);
    printf("In hours=%f\n",hours);
    printf("In days=%f",day);

    return 0;

        


}