#include<stdio.h>

int main(){
    int arr_1[20][20],arr_2[20][20],arr_ans[20][20],rows,column,i,j;

    printf("Enter the number rows and columns:");
    scanf("%d %d",&rows,&column);

    printf("Enter the first matrix\n");
    for(i = 0;i<rows;i++){
        for(j = 0;j<column;j++){
            scanf("%d",&arr_1[i][j]);
        }
    }
    printf("Enter the secound matrix\n");
    for(i = 0;i<rows;i++){
        for(j = 0;j<column;j++){
            scanf("%d",&arr_2[i][j]);
        }
    }

    for(i = 0;i<rows;i++){
        for(j = 0;j<column;j++){
            arr_ans[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }
    printf("THe ans mat is:\n");

    for(i = 0;i<rows;i++){
        for(j = 0;j<column;j++){
            printf("%d ",arr_ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}