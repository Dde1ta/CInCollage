#include<stdio.h>

int main(){
    int till,i,sum,a,b;
    i = 0;
    printf("ENter the number of terms of fab squ.");
    scanf("%d",&till);
    a = 0;
    b = 1;
    START:printf("%d\n",a);
    sum = a+b;
    a = b;
    b = sum;
    if(i++<till){
        goto START;
    }else{
        return 0;
    }
}