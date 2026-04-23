/*Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<stdio.h>
int main()
{
    int i,n,r;
    printf("write the integer for the multipcation\n");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        r=n*i;
        printf("\n%d x %d = %d\n",n,i,r);
    }
    return 0;
}
