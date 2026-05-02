/*Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47*/
#include<stdio.h>
int main(){
    int n,i,j,e,o;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    int even[n],odd[n];
    j=0;
    for(i=0;i<n;i++){
            if(array1[i]%2==0){
            even[j]=array1[i];
            j++;
            }}
            e=j;
            j=0;
    for(i=0;i<n;i++){
            if(array1[i]%2!=0){
            odd[j]=array1[i];
            j++;
            }}
            o=j;
printf("The Even elements are :\n");
        for(i=0;i<e;i++)
    {
        printf("%d, ",even[i]);
    }
    printf("\nThe Odd elements are :\n");
    for(i=0;i<o;i++)
    {
        printf("%d, ",odd[i]);
    }
    return 0;
    }



