//WAP to swap two number without using thrid varable
/*
a = 10
b = 20

a = 10+20 = 30; b = 20

b = 30 - 20 = 10
a = 30 - 10 = 20 ;)


*/
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);

    printf("Numbers are being swaped %d %d \n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers are swaped %d %d",a,b);

    return 0;
}