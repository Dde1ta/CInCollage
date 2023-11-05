/*
write a program to access the element of a arr of n
*/
#include<stdio.h>

int main(){
    int n,i,sum;

    printf("Enter the size of the arr:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<n;i++){
        sum += arr[i];
    }
    printf("the sum id %d",sum);
    return 0;
}