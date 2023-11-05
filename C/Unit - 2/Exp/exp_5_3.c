#include<stdio.h>

int add_mat(){
    int arr1[20][20],arr2[20][20],r1,c1,r2,c2,i,j;
    printf("Enter the number of rows and columns of First matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of rows and columns of Second matrix:");
    scanf("%d %d",&r2,&c2);

    if((r1 == r2)&&(c1 == c2)){
        printf("Enter the element of first matrix\n");
        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("Enter the element of second matrix\n");
        for(i = 0;i<r2;i++){
            for(j = 0;j<c2;j++){
                scanf("%d",&arr2[i][j]);
            }
        }

        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                arr1[i][j] += arr2[i][j];
            }
        }
        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Not possible");
    }
}

int sub_mat(){
    int arr1[20][20],arr2[20][20],r1,c1,r2,c2,i,j;
    printf("Enter the number of rows and columns of First matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of rows and columns of First matrix:");
    scanf("%d %d",&r2,&c2);

    if((r1 == r2)&&(c1 == c2)){
        printf("Enter the element of first matrix\n");
        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("Enter the element of second matrix\n");
        for(i = 0;i<r2;i++){
            for(j = 0;j<c2;j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                arr1[i][j] -= arr2[i][j];
            }
        }
        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Not possible");
    }
}

int mul_mat(){
    int arr1[20][20],arr2[20][20],arr_ans[20][20],r1,c1,r2,c2,i,j,k,element;
    printf("Enter the number of rows and columns of First matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of rows and columns of First matrix:");
    scanf("%d %d",&r2,&c2);

    if(c1 == r2){
        printf("Enter the element of first matrix\n");
        for(i = 0;i<r1;i++){
            for(j = 0;j<c1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("Enter the element of second matrix\n");
        for(i = 0;i<r2;i++){
            for(j = 0;j<c2;j++){
                scanf("%d",&arr2[i][j]);
            }
        }

        
        for(i = 0;i<r1;i++){
            for(j = 0;j<c2;j++){
                element = 0;
                for(k = 0;k<c1;k++){
                    element += arr1[i][k]*arr2[k][j];
                }
                arr_ans[i][j] = element;
            }
        }
        for(i = 0;i<r1;i++){
            for(j = 0;j<c2;j++){
                printf("%d ",arr_ans[i][j]);
            }
            printf("\n");
        }

    }else{
        printf("Not possible");
    }
} 
int trans_mat(){

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

int main(){
    int arr1[20][20],arr2[20][20],r1,c1,r2,c2,i,j,k,case_;
    
    printf("The cases are\n\t1)Add 2 matrix\n\t2)Sub 2 matrix\n\t3)Mul 2 matrix\n\t4)Transpose\nEnter the case:");
    scanf("%d",&case_);

    switch (case_)
    {
    case 1:
        add_mat();
        break;
    case 2:
        sub_mat();
        break;
    case 3:
        mul_mat();
        break;
    case 4:
        trans_mat();
        break;
    default:
        break;
    }
    return 0;
}
