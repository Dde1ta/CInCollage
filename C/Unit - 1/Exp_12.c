/*
WAP to swap to number bit wise operators

a = 9;1001 
b = 10;1010
a = a|b 1011
b = a&b 1010
*/
#include<stdio.h>

int main(){
    int a,b,c;
    
    printf("Enter the values of numbers and the bits:");
    scanf("%d %d",&a,&b);
    a = a^b;
    printf("%d %d\n",a,b);
    b = a^b;
    printf("%d %d\n",a,b);
    a = a^b;
    printf("%d %d\n",a,b);
    return 0;
}