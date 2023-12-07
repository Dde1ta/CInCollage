#include<stdio.h>

int main(){
    int a = 0,b = 1,sum,till;
    register int i = 1;

    printf("Enter the number of terms:");
    scanf("%d",&till);
    
    for(i;i<=till;i++){
        printf("%d\n",a);
        sum = a+b;
        a = b;
        b = sum;
    }
    return 0;
}