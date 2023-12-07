#include<stdio.h>

int main(){
    int i =5;
    auto int g=2;
    for(i = 0;i<10;i++){
        printf("%d ",i);
        
        g==2?printf(" it ran\n"):printf("It didnt run %d\n",g);
        g++;
    }}