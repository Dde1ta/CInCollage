#include<stdio.h>

int main(){
    int arr[20][20],row,column,i,j,temp,arr_t[20][20];

    printf("Enter the dimension:");
    scanf("%d %d",&row,&column);

    for(i = 0;i<row;i++){
        for(j = 0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0;i<row;i++){
        for(j = 0;j<column;j++){
            arr_t[j][i] = arr[i][j];
        }
    }

    printf("THe OG\n");
    for(i = 0;i<row;i++){
        for(j = 0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
    printf("THe beta\n");
    for(i = 0;i<column;i++){
        for(j = 0;j<row;j++){
            printf("%d ",arr_t[i][j]);
        }
        printf("\n");
    }
}