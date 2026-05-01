/*Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1*/
#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    int array [n];
    printf("Input %d elements in the array",n);
    for(i=0;i<n;i++){
        scanf("%d",&array [i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
         if (array[i]==array[j])
         {
             k=k+1;
             break;
         }
        }
    }
    printf("Total number of duplicate elements found in the array is :%d",k);
}
