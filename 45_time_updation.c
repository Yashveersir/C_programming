/* Question: Ek program likhein jo structures ka use karke diye gaye time me 10 seconds add kare. */

#include <stdio.h>

typedef struct time
{
    int hour;
    int min;
    int sec;
} time;

// 10 seconds add karne aur carry over ke liye function
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
        }
    }
    printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);
}

int main(void)
{
    time t;
    printf("Enter Time (hh:mm:ss)\n");
    scanf("%d %d %d", &t.hour, &t.min, &t.sec);
    
    // Agar user-input time invalid ho, toh usko normalize karein
    if (t.sec > 59)
    {
        t.min = t.min + 1;
        t.sec = t.sec - 60;
    }
    if (t.min > 59)
    {
        t.hour += 1;
        t.min -= 60;
    }
    
    printf("\nTime is %d:Hours %d:Minutes %dSecond", t.hour, t.min, t.sec);

    printf("\nTime after Updation\n");
    uptime(t);

    return 0;
}
