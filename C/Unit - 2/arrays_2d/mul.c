#include<stdio.h>

int main(){
    int arr_1[20][20],arr_2[20][20],arr_ans[20][20],r1,c1,r2,c2,i,j,k,element;

    printf("Enter the number rows and columns first mat:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number rows and columns sec mat:");
    scanf("%d %d",&r2,&c2);

    if(c1 != r2){
        printf("Not possible");
        return 0;
    }
    printf("ENter the 1 mat\n");
    for(i = 0;i <r1;i++){
        for(j =0;j<c1;j++){
            scanf("%d",&arr_1[i][j]);
        }
    }
    printf("ENter the 2 mat\n");
    for(i = 0;i <r2;i++){
        for(j = 0;j<c2;j++){
            scanf("%d",&arr_2[i][j]);
        }
    }
    for(i = 0;i<r1;i++){
        for(j = 0;j<c2;j++){
            element = 0;
            for(k = 0; k <c1;k++){
                element += arr_1[i][k]*arr_2[k][j];
            }
            arr_ans[i][j] = element;
        }
    }
    printf("The ans is\n");

    for(i = 0;i<r1;i++){
        for(j = 0;j<c2;j++){
            printf("%d",arr_ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}