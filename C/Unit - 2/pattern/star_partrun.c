#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number of rows:");
    scanf("%d",&a);
    int i = 0;
    for(b=0;b<=a;b++){
        printf("\n");
        for(i = 0;i<b;i++){
            printf("*");
        }
    }
    return 0;
}