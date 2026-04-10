/*Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer*/

#include<stdio.h>
int main (){
    int a;
    scanf ("%d",&a);
    if(a%2==0)
        printf("%d, is an even integer",a);
    else
        printf("%d, is an odd integer");
    return 0;
}
