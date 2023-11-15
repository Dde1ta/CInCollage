#include<stdio.h>

void printf_arr_reverse(int*,int);
void input_arr(int*,int);
int main(){
    int arr[50],size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    input_arr(arr,size);
    printf_arr_reverse(arr,size);
    return 0;
}

void printf_arr_reverse(int *arr,int size){
    int i = size-1;
    for(i;i>=0;i--){
        printf("%d ",*(arr+i));
    }
}
void input_arr(int *arr,int size){
    int i;
    for(i = 0;i<size;i++){
        scanf("%d",(arr+i));
    }
}