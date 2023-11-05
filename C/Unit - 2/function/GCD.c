#include<stdio.h>

int gcd(int,int);

int main(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}

int gcd(int a, int b){
    if (a%b == 0){
        return b;
    }else{
        gcd(a,a%b);
    }
}