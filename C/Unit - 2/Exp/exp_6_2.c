#include<stdio.h>

int fab(int,int,int);

int main(){
    int term;
    printf("enter the term:");
    scanf("%d",&term);

    printf("The term is %d",fab(0,1,term));
    return 0;
}

int fab(int a,int b,int term){
    if (term == 1){
        return a;
    }else{
        fab(b,a+b,--term);
    }
}