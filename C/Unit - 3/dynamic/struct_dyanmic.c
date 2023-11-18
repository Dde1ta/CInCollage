#include<stdio.h>
#include<stdlib.h>

struct dynamin{
    int age;
};

int main(){
    struct dynamin *p = (struct dyanmin*) malloc(sizeof(struct dynamin));
    printf("enter the age:");
    scanf("%d",&p->age);
    printf("The age is %d",p->age);
    return 0;
}