/*Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5*/

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
    printf("The unique elements found in the array are:\n");
    for(i=0;i<n;i++){
            k=0;
        for(j=0;j<n;j++){
         if (array[i]==array[j])
         {
             k=k+1;
         }
        }
        if (k==1)
        {
            printf("%d",array[i]);
        }
    }

}

