/*
write a program to find smallest of
*/
#include<stdio.h>

int main(){
    int n,i,min;

    printf("Enter the size of the arr:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i = 1;i<n;i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}