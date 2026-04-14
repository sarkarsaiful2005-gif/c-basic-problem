/*Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop.
Calculate and print the sum of all the positive integers entered.*/
#include<stdio.h>
int main(){
    int i=0,n,s=0;
    printf("give input with space.For example:1 2 3.Rememver space \n necessary for looks good output.If finish giving input just write 0 and press ENTER \n");
    scanf("%d",&n);
    while(n!=0){
            printf("you enterted :%d\n",n);
            if(n>0)
            {
                s=s+n;
            }scanf("%d",&n);

    }
    printf("\nthe sum of positive number: %d",s);
    return 0;

}
