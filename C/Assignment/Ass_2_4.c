/*
4.	What is an array? Define an array to store marks of 30 students in 3 subjects.
*/

#include <stdio.h>

int main(){
    int arr[30][3],i,j;

    for(i = 1;i<=30;i++){
        printf("Enter the marks of student no. %d: ",i);
        for(j = 0;j<3;j++){
            scanf("%d",&arr[i-1][j]);
        }
    }
    for(i = 1;i<=30;i++){
        printf("The marks of student %d are: ",i);
        for(j = 0;j<3;j++){
            printf("%d ",arr[i-1][j]);
        }
        printf("\n");
    }
    return 0;
}