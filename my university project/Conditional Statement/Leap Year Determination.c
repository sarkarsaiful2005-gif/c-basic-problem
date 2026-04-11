/*Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.*/
#include<stdio.h>
int main()
{
  int a;
  printf("write the year");
  scanf("%d",&a);
  if(a%4==0)
  {if(a%100!=0||a%400==0)
    printf("%d, is a leap year",a);
    else
        printf("%d, is nor a leap year");
  }
  else
  {
    printf("%d, is not a leap year",a);
  }
  return 0;

}
