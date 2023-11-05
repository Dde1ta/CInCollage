/*
delete a number from an array
*/

#include<stdio.h>

int main(){
    int arr[20],size,i,index,temp;

    printf("Enter the size:");
    scanf("%d",&size);

    for(i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n\n Enter the index at which the number should be deleted:");
    scanf("%d",&index);

    for(i = index;i<size; i++){
        arr[i] = arr[i+1];
    }
    size--;
    for(i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    

}