#include<stdio.h>
int main()
{
    double amount,interest,sum=0;
    printf("write the amount");
    scanf("%lf",&amount);
    if(amount<10000)
    {
        interest=amount*0.05;
    }
    else if(interest>=10000&&interest<=50000){
        interest=amount*0.07;}
        else
        {
            interest=amount*0.1;
        }
        sum=amount+interest;
        printf("sum %f\n",sum);
        printf("interest %f",interest);
    }
