/*Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21*/
#include<stdio.h>
int main(){
    int n,i,max,min;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    max=array1[0];
    min=array1[0];
    for(i=0;i<n;i++){
            if(array1[i]>max){
                max=array1[i];
            }
        }

    for(i=0;i<n;i++){
            if(array1[i]<min){
                min=array1[i];
            }
        }
    printf("Maximum element is : %d\n",max);
    printf("Minimum element is : %d",min);
    return 0;
}
