#include<stdio.h>

int fab(int,int,int*);

int main(){
    int a = 0,b = 1,n;

    printf("Enter the term:");
    scanf("%d",&n);

    printf("%d",fab(a,b,&n));

    return 0;
}

int fab(int a,int b,int*n1){
    if(*n1 == 0){
        return a;
    }else{
        *n1 = *n1 - 1;
        fab(b,a+b,n1);
    }
}