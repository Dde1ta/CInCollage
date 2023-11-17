/*
5.	Print all element of an array after passing it into a function
*/

#include <stdio.h>

void printArr(int[],int);

int main(){
    int arr[50],size,i;
    printf("Enter the size:");
    scanf("%d",&size);

    for(i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printArr(arr,size);
}

void printArr(int arr[],int size){
    int i;
    for(i = 0;i<size;i++){
        printf("%d,",arr[i]);
    }
}
