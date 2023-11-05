#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number of rows:");
    scanf("%d",&a);
    int spaces = 0;
    int i = 0;
    for(b=0;b<=a*2;b++){
        if(b%2 !=0){
            printf("\n");
            for(spaces = 0;spaces<(a*2-b)/2+1; spaces++){
                printf(" ");
            }
            for(i = 0;i<b;i++){
                printf("*");
            }
        }
        
    }
    return 0;
}