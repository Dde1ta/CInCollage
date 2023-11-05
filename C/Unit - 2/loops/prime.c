#include<stdio.h>

int main(){
    int i = 3,n;

    printf("Enter the number:");
    scanf("%d",&n);

    if(n%2 == 0){
        if(n == 2){
            printf("it is a prime number");
            return 0;
        }else{
            printf("it is not a prime number as it is dividable by 2");
            return 0;
        }
    }
    for(i;i<=n/3;i+=1){
        if(n%i == 0){
            printf("it is not a prime number as it is dividable by %d",i);
            return 0;
        }
    }
    printf("it is a prime number");
    return 0;
}