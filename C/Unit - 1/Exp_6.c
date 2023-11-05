//WAP to swap 2 to numbers using thrid vriable

#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);

    printf("Numbers are being swaped %d %d \n",a,b);
    c = a;
    a = b;
    b = c;
    printf("Numbers are swaped %d %d",a,b);
    return 0;
}