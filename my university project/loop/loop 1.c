#include<stdio.h>
int main()
{
    int t,i;
    float sum=0;
    scanf ("%d",&t);
    for (i=1;i<=t;i=i+1)
        {if (i<=3)
        {
            sum=sum+2;
        }
        else if (i<=8)
            {sum=sum+1.5;

            }

             else {sum=sum+1;}
            }
        printf ("%.2f",sum);
    return 0;
}
