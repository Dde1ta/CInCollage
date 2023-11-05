/*
4.	What is an array? Define an array to store marks of 30 students in 3 subjects.
*/

#include <stdio.h>

int main(){
    int arr[3][30],i,j;

    for(i = 1;i<=3;i++){
        printf("Enter the marks of subject %d",i);
        for(j = 0;j<30;j++){
            scanf("%d",&arr[i-1][j]);
        }
    }
    for(i = 1;i<=3;i++){
        printf("The marks of subject %d",i);
        for(j = 0;j<30;j++){
            printf("%d ",arr[i-1][j]);
        }
        printf("\n");
    }
    return 0;
}