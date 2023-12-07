#include<stdio.h>

int main(){
    int arr[200],i,j,size,place,i_;
    printf("Enter the size of the list:");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The arr before sort:");
    for(i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i = 1;i<size;i++){
        for(j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                place = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = place;
            }
        }
        printf("The arr after pass %d:",i);
        for(i_ = 0;i_<size;i_++){
            printf("%d ",arr[i_]);
        }
        printf("\n");
    }
    printf("The arr after sort:");
    for(i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}