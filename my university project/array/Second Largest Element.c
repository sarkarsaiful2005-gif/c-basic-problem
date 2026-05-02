/*Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6*/

#include<stdio.h>
int main(){
    int n,i,max,max2;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    max=array1[0];
    max2=array1[0];
    for(i=0;i<n;i++){
            if(array1[i]>max){
                max2=max;
                max=array1[i];
            }

    else if(array1[i] > max2 && array1[i] != max){
        max2 = array1[i];
        }
    }
    printf("The Second largest element in the array is : %d\n",max2);

    return 0;
}
