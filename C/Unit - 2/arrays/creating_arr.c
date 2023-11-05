/*
write a program to access the element of a arr of n
*/
#include<stdio.h>

int main(){
    int n,i,index;

    printf("Enter the size of the arr:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int con = 1;
    while(con){
        printf("\nEnter the index to access(-1 to exit):");
        scanf("%d",&index);

        if(index == -1){
            con = 0;
        }else{
            printf("\n%d",arr[index]);
        }
    }
    return 0;
}/*
hi i am divyansh*/