/*
WAP which implements the working of << >>

>> = a*2^(b)
<< = a/2^(b)

practical number 2 :)
*/

#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the values of numbers and the bits:");
    scanf("%d %d",&a,&b);
    printf("The value of %d << %d is %d\n",a,b,a<<b);// shifts the binary code to left side by b bits
    printf("The value of %d >> %d is %d",a,b,a>>b);// shifts the binary code to right side by b bits
    return 0;
}