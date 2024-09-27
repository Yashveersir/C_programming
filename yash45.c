#include <stdio.h>
typedef struct time
{
    int hour;
    int min;
    int sec;
} time;
void uptime(time t)
{
    t.sec += 10;
    if (t.sec > 59)
    {
        t.min += 1;
        t.sec -= 60;
        if (t.min > 59)
        {
            t.hour += 1;
            t.min -= 60;
            printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
        }
        else
            printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
    }
    else
        printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
}
int main(void)
{
    time t;
    printf("Enter Time (hh:mm:ss)\n");
    scanf("%d %d %d", &t.hour, &t.min, &t.sec);
    // display time

    if (t.sec > 59)
    {
        t.min = t.min + 1;
        t.sec = t.sec - 60;
        if (t.min > 59)
        {
            t.hour += 1;
            t.min -= 60;
            printf("Time is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
        }
        else
        {
            printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
        }
    }
    else if (t.min > 59)
    {
        t.hour += 1;
        t.min -= 60;
        printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
    }
    else
        printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);

    printf("\nTime after Updation\n");
    uptime(t);

    return 0;
}
