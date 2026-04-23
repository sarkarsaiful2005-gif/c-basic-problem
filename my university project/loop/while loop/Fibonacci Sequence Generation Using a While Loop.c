/*Write a C program to find and print the first 10 Fibonacci numbers using a while loop*/
#include<stdio.h>
int main(){
    int a=0,b=1,c,i=1;
    printf("%d %d ",a,b);
    while(i<9){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }

}
