#include<stdio.h>

int main(){
    int i = 3,n,sum = 1;

    printf("Enter the number:");
    scanf("%d",&n);

    if(n%2 == 0){
        if(n == 2){
            printf("not perfect");
        }else{
            sum += 2;
        }
    }

    for(i;i<=n/2;i+=1){
        if(n%i == 0){
            sum += i;
        }
    }
    if(sum == n){
        printf("perfect ;)");
    }else{
        printf("not perfect :(");
    }
return 0;
}