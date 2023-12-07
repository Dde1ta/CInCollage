#include<stdio.h>

int main(){
    int *p=NULL;
    int a = 5;
    printf("%d\n",p);//printing a null pointer
    p = &a;
    printf("%d\n%d",p,*p);
    return 0;
}