#include<stdio.h>
int main (){
    int n,i,f=0;
    scanf("%d",&n);
    if(n<2){printf("%d is a not prime number",n);}
    else{

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("%d is a not prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }}
    return 0;
}
