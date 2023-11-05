#include<stdio.h>

int main(){
    int arr[200],i,size,to_find,to_insert,start = 0,mid,end;
    printf("Enter the size of the list:");
    scanf("%d",&size);

    scanf("%d",&arr[0]);

    for(i=1;i<size;i++){
        scanf("%d",&to_insert);
        if(arr[i-1]>to_insert){
            i--;
            printf("please enter the number in increasing order\n");
        }else{
            arr[i] = to_insert;
        }
    }

    printf("ENter the number to find");
    scanf("%d",&to_find);

    start = 0;
    end = size -1;
    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] == to_find){
            printf("Element at %d",++mid);
            return 0;
        }else if(arr[mid] > to_find){
            end = mid; 
        }else{
            start = mid;
        }
    }
    printf("Element is not in list");
    return 0 ;
}