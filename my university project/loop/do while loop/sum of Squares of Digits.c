/*Write a C program that prompts the user to enter a positive integer and then calculates and
 prints the sum of the squares of each digit in that number using a do-while loop*/
#include<stdio.h>
int main(){
    int a,n,sum=0,p;
    printf("please write positive integer ");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("EROR: please write positive integer ");
        return 0;
    }
    do
    {
        n=a%10;
        p=n*n;
        printf ("%d*%d=%d\n",n,n,p);
        sum=sum+p;
        a=a/10;
    }while(a!=0);
    printf ("the sum of the squares of each digit: %d",sum);
    return 0;
}
