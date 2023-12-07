#include<stdio.h>

int main(){
    int *p = NULL;//declaring a null pointer
    int a = 5;
    printf("%d\n",p);//printing a null pointer
    p = &a;
    p++;//assigning a address to the pointer
    printf("%d\n%d",p,*p);
    return 0;
}