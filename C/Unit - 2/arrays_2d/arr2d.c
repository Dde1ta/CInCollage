#include<stdio.h>

int main(){
    int arr[20][20],rows,column,i,j;

    printf("Enter the number rows and columns:");
    scanf("%d %d",&rows,&column);

    for(i = 0;i<rows;i++){
        for(j = 0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The arr is\n");
    for(i = 0;i<rows;i++){
        for(j = 0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}