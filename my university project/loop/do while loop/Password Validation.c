/*Write a C program that prompts the user to enter a password.
 Use a do-while loop to keep asking for the password until the correct one is entered.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char p[50],r[60];
    printf ("make your password without space:");
    scanf("%s",p);
    printf("\n");
    do{
        scanf("%s",r);
        if(strcmp(p,r)==0)
        {
            printf("CORRECT PASSWORD\n");
            break;
        }
        else
        {
            printf("WORNG PASSWORD\n");
         printf("try again:");
        }
    }while(1);
    return 0;
}
