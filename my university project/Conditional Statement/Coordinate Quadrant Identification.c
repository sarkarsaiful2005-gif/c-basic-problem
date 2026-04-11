/*Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.*/
#include<stdio.h>
int main(){
int x, y;
printf("write the coordinate point like a,b\n",x,y);
scanf("%d,%d", &x, &y);
if(x>0,y>0)
    printf("(%d,%d) lies in First quardrant",x,y);
else if(x<0&&y>0)
   {

    printf("(%d,%d) lies in Secound quardrant",x,y);}
    else if(x<0&&y<0){
    printf("(%d,%d) lies in Third quardrant",x,y);}
    else if(x>0&&y<0)
   {printf("(%d,%d) lies in Fourth quardrant",x,y);}
    else{
    printf("(%d,%d) lies in origin",x,y);}
    return 0;

}
