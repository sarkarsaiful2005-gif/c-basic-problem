/*Write a program in C to sort elements of an array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9*/
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array[n];
    printf("Input %d elements in the array :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("Elements of array in sorted ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
