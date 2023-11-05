#include<stdio.h>

int isPrime(int n);

int main(){
    int n,m;
    printf("Enter the range to print:");
    scanf("%d %d",&n,&m);

    for(n;n<=m;n++){
        if (isPrime(n)){
            printf("%d\n",n);
        }
    }
}

int isPrime(int n){
    int i = 3;
    if(n%2 == 0){
        if(n == 2){
            return 1;
        }else{
            
            return 0;
        }
    }
    for(i;i<=n/3;i+=1){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}