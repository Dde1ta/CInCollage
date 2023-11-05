/*
wap to check if lest siginficate bit (LSB) of a numbers is set/not (1/0)
*/

#include<stdio.h>

int main(){
    int n;

    printf("Enter the value of a :");
    scanf("%d",&n);

    (n&1)? printf("The LSB of %d is set",n):printf("THe LSB of %d is not set",n);
    return 0;
}