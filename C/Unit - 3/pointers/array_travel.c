/*
WAP to travel a one d arrays with pointers
*/

#include<stdio.h>

void input_arr(int *,int);
void print_arr(int *,int);

int main(){
    int arr[50],size;

    printf("Enter the size of the array:");
    scanf("%d",&size);
    
    input_arr(arr,size);
    print_arr(arr,size);
    return 0;
}

void input_arr(int *q,int size){
    int i;
    printf("Enter the elements of the array:\n");
    for(i = 0;i<size;i++){
        scanf("%d",q+i);
    }
}

void print_arr(int *q,int size){
    int i;
    printf("The array is :-\n");
    for(i = 0;i<size;i++){
        printf("%d ",*(q+i));
    }
}