/*
2.	Write a C program to print all the prime numbers between 1 to 100.
*/
#include <stdio.h>

int isPrime(int);

int main(){
    int i;
    for(i = 2;i<=100;i++){
        if(isPrime(i)){
            printf("%d,",i);
        }
   }
}

int isPrime(int a){
    int i;
    if(a == 2 || a == 3){
        return 1;
    }else if(a%2 == 0){
        return 0;
    }
    for(i = 2;i<=a/3+1;i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}