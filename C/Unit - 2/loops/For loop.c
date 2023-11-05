/*
    For loop is the entry control loop
            for(int i,i<10,i++){
                <body>
            }

printf hello 50 times

*/

#include<stdio.h>

int main(){
    int i = 1;
    int n,fact = 1,sum = 0;
    printf("ENter the number:");
    scanf("%d",&n);
    while (i<=n){
        fact *= i;
        sum += i;
        i++;
    }
    printf("The factorial is %d\nThe sum is %d",fact,sum);
    return 0;
}
