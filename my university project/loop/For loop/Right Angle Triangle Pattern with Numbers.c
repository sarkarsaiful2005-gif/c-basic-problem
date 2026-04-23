/*Write a C program to display a pattern like a right angle triangle with a number.

The pattern like :

1
12
123
1234*/
#include<stdio.h>
int main()
{
    int i,n,r,s;
    printf("write the integer for the multipcation\n");
    scanf("%d",&n);
    printf("\n");
    for(s=1;s<=n;s++){
    for(i=1;i<=s;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    }
    return 0;
}
