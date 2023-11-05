#include<stdio.h>

int main(){
    int a = 0,b = 1,sum,till,i = 0;

    printf("Enter the number of terms:");
    scanf("%d",&till);
    printf("0\n");
    
    for(i;i<till;i++){
        printf("%d\n",b);
        sum = a+b;
        a = b;
        b = sum;
    }
    return 0;
}