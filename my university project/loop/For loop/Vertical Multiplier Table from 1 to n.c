/*Write a program in C to display the multiplier table vertically from 1 to n.
Test Data :
Input upto the table number starting from 1 : 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80*/
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
    int i,n,r,s;
    printf("write the integer for the multipcation\n");
    scanf("%d",&n);
    printf("\n");
    for(s=1;s<=n;s++){
    for(i=1;i<11;i++)
    {
        r=s*i;
        printf("%d x %d = %d , ",s,i,r);
    }
    printf("\n");
    }
    return 0;
}

