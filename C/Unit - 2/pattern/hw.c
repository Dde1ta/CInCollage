#include<stdio.h>

int main(){
    int a,b,a_;
    printf("Enter the number of rows:");
    scanf("%d",&a);
    int spaces = 0;
    int i = 0;
    for(b=0;b<=a;b++){
        printf("\n");
        for(spaces = 0;spaces<(a-b); spaces++){
            printf(" ");
        }
        a_ = b;
        for(i = 1;i<=b;i++){
            printf("%d",a_--);
        }
    }
    return 0;
}