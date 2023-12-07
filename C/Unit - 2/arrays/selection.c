#include<stdio.h>

int main(){
    int arr[59],k,j,i,temp,size,sorted = 0,min = 0;

    printf("Enter the size of array");
    scanf("%d",&size);

    for(i = 0;i<size;i++){
        scanf("%d",arr+i);
    }

    for(i = 0;i<size;i++){
        printf("the array is:");
        for(k = 0;k<size;k++){
            printf("%d ",arr[k]);
        }
        min = i;
        for(j = i;j<size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(i != min){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        printf("\n");
    }

    printf("The sorted arr is:");
    for(k = 0;k<size;k++){
        printf("%d ",arr[k]);
    }

    return 0;
}