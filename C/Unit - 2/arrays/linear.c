#include<stdio.h>

int main(){
    int arr[20],i,size,to_find;
    printf("Enter the size of the list:");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("ENter the number to find");
    scanf("%d",&to_find);

    for(i = 0;i<size;i++){
        if (arr[i] == to_find){
            printf("The element if at position %d",i+1);
            return 0;
        }
    }
    printf("The number is not present in the list");
    return 0;
}