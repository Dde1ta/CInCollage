#include<stdio.h>

void swap(int*,int*);

int main(){
    int a,b;
    printf("Enter the number");
    scanf("%d %d",&a,&b);

    printf("Before swaping %d %d\n",a,b);
    swap(&a,&b);
    printf("After swaping %d %d\n",a,b);

    return 0;
}

void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}