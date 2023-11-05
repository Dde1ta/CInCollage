/*
WAP to verify the diffence b/w ++i , i++
*/
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);

    b = a++;
    printf("The value of b after a++ is %d and of a is %d\n",b,a);
    b = ++a;
    printf("The value of b after ++a is %d and of a is %d",b,a);
    return 0;
}