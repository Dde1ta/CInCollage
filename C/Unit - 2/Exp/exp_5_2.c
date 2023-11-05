/*
Bubble sort
*/

#include<stdio.h>

int main(){
    int arr[20],size,i,temp,j;

    printf("Enter the size:");
    scanf("%d",&size);

    for(i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(j = 1;j<size;j++){
        for(i = 0; i<size-j ;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }//printf("\n %d %d",j, i);
        } 
    }

    for(i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}