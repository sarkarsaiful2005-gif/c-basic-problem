/*Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9*/
#include<stdio.h>
int main(){
    int s[19],i;
    for(i=0;i<19;i++){
        scanf("%d",&s[i]);
        printf("%d",s[i]);

    }return 0;
}
