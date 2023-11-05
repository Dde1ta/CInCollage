/*
6.	Write a C program to find the GCD of two numbers.
*/

#include <stdio.h>

int GCD(int,int);

int main(){
    int a,b;

    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("The GCD is %d",GCD(a,b));
    else
        printf("The GCD is %d",GCD(b,a));
    return 0;
}

int GCD(int a,int b){

    if(b == 0){
        return a;
    }else{
        GCD(b,a%b);
    }
}