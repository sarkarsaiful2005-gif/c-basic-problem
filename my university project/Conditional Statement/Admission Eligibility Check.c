/*Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190
or Total in Maths and Physics >=140 ----
Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths,
 Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

Expected Output :
The candidate is not eligible for admission.*/
#include<stdio.h>
int main(){
int m,c,p,t;
printf("write the mark of math chemistry physis in squience");
scanf("%d%d%d",&m,&c,&p);
t=m+c+p;
if(m>=65&&c>=50&&p>=55&&t>=190||m+p>=140)
    printf("The candidate is eligible for admission");
else
    printf("The candidate is not eligible for admission");
return 0;

}
