/*Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1*/
#include<stdio.h>
int main(){
    int n,m,i,j,temp,v;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Input the number of elements to be stored in the secound array :");
    scanf("%d",&m);
    int array2[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&array2[i]);
    }
    v=n+m;
    int array3[v];
    //store first array
    for(i=0;i<n;i++){
        array3[i]=array1[i];
    }
    //secound
    for(i=0;i<m;i++){
        array3[n+i]=array2[i];
    }
    for(i=0;i<v;i++){
        for(j=i+1;j<v;j++){
            if(array3[i]<array3[j]){
                temp=array3[i];
                array3[i]=array3[j];
                array3[j]=temp;
            }
        }
    }
    printf("The merged array in decending order is :\n");
    for(i=0;i<v;i++){
        printf("%d ",array3[i]);
    }
}
