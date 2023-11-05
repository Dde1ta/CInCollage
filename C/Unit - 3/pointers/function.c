/*
WAP to find max of two numbers by use the cosept of returning and passing a pointer in a function
*/

#include <stdio.h>

int* max(int*,int*);

int main(){
    int a,b;

    printf("Enter the number:");
    scanf("%d %d",&a,&b);

    printf("The greatest is %d",*(max(&a,&b)));
}

int* max(int *a, int *b){
    if(*a > *b){
        return a;
    }else{
        return b;
    }
}