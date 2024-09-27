//simple and compound interest
#include<stdio.h>
#include<math.h>
int main(void)
{
    float P,T,R,SI,CI;
    printf("Enter Principal Amount=");
    scanf("%f",&P);
    printf("Enter Time period(in year)=");
    scanf("%f",&T);
    printf("Enter annual interest rate(%%)=");
    scanf("%f",&R);
    SI=P*T*R/100;
    printf("Simple Interest=%f\n",SI);
    CI=P*pow((1+R/100),T)-P;
    printf("Compound Interest=%f\n",CI);

    return 0;


}