#include<stdio.h>

int main(){
    int i = 32,n = 0;
    for(i;i<=126;i++){
        printf("%c",i);
        n += 1;
    }
    printf("%d",n);
    return 0;
}