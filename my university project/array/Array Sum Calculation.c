/*Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/
#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter the amount of inputs: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("Sum of all elements stored in the array is :%d",sum);
    return 0;
}






