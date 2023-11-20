/*
Wap to store a string in the block of memory space created by malloc and moldfy it to store a large string
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,i;
    printf("Enter the size:");
    scanf("%d",&size);

    char *p = (char*)malloc(size*sizeof(char)+1);

    printf("Enter the string");
    for(i = 0;i<=size;i++){
        scanf("%c",p+i);
    }
    for(i = 0;i<=size;i++){
        printf("%c",*(p+i));
    }
    return 0;
}