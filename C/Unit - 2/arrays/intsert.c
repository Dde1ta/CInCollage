/*
write a program to find smallest of
*/
#include<stdio.h>

int main(){
    int n,i,index,current,next,value;

    printf("Enter the size of the arr:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values");
    for(i = 0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the index and value:");
    scanf("%d %d",&index,&value);
    current = arr[index];
    arr[index] = value;

    for(i = index+1;i<n;i++){
        next = arr[i];
        arr[i] = current;
        current = next;
    }
    for(i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}