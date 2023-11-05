/*
What are differences between while statement and Do- while statement in C? Explain with example?
*/

#include <stdio.h>

int main(){
    int i = 0;
    printf("While loop output\n");
    while(i < 0){
        printf("%d ",i++);
    }
    printf("\nDo While loop output\n");
    i = 0;
    do{
        printf("%d ",i++);
    }while(i< 0);
}