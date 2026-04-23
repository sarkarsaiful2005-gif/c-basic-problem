/*Write a C program that implements a program to check if a given number is a palindrome using a while loop.*/

#include<stdio.h>
int main()
{
    int i,a,r=0;
    scanf("%d",&a);
    i=a;
    while(a!=0){
        r=r*10+a%10;
    a=a/10;
    }
    if(i==r){
        printf("number is a palindrome");
    }
    else
       {printf("number is not a palindrome");}
    return 0;
}
