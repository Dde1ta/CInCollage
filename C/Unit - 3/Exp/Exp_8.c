/*

WAP to print elemnets of one ARRAY in reve using pointer

WAP to travel a one d arrays with pointers
*/
/*
WAP to find max of two numbers by use the cosept of returning and passing a pointer in a function
*/

#include<stdio.h>

int* input_arr(int *,int);
void print_arr_rev(int *,int);

int main(){
    int arr[50],*p = &arr[0],size;

    printf("Enter the size of the array:");
    scanf("%d",&size);
    
    print_arr_rev(input_arr(p,size),size);
    return 0;
}

int* input_arr(int *q,int size){
    int i;
    printf("Enter the elements of the array:\n");
    for(i = 0;i<size;i++){
        scanf("%d",q++);
    }
    return --q;
}

void print_arr_rev(int *q,int size){
    int i;
    printf("The array is :-\n");
    for(i = 0;i<size;i++){
        printf("%d ",*(q));
        q--;
    }
}