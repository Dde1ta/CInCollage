/*
Wap to print even or odd with useing goto
*/

#include<stdio.h>

int main(){
    int a;

    printf("ENter the number:");
    scanf("%d",&a);

    if (a%2 == 0){
        goto EVEN_PRINT;
    }else{
        goto ODD_PRINT;

    }
    EVEN_PRINT:printf("the number is even\n");
    goto R;
    ODD_PRINT:printf("the number is odd\n");
    R:return 0;
}