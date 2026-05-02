/*Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4*/
#include<stdio.h>
int main(){
    int n,i,min,min2;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    min=array1[0];
    min2=array1[0];
    for(i=0;i<n;i++){
            if(array1[i]<min){
                min2=min;
                min=array1[i];
            }

    else if(array1[i] < min2 && array1[i] != min){
        min2 = array1[i];
        }
    }
    printf("The Second smallest element in the array is : %d\n",min2);

    return 0;
}

