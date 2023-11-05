/*
WAP to print to nth  root
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a,b;
    printf("Enter the numbers:");
    scanf("%f %f",&a,&b);
    printf("The %f root of %f is %f",b,a,pow(a,1/b));
    return 0;
}