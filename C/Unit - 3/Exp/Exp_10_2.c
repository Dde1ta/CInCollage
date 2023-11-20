/*
Wap create one array and shearh using leren sherach
*/
#include<stdio.h>
#include<stdlib.h>
int linear(int*,int,int);
int main(){
    int *p,size,to_find,i;
    printf("Enter the size of array:");
    scanf("%d",&size);

    p = (int*)calloc(size,sizeof(int));
    printf("enter the values of the array:");
    for(i = 0;i<size;i++){
        scanf("%d",p+i);
    }
    printf("Enter the element two find");
    scanf("%d",&to_find);

    linear(p,size,to_find);
    
    return 0;
}
int linear(int* p,int size,int to_find){
    int i;
    for(i = 0;i<size;i++){
        if(*(p+i) == to_find){
            printf("Found at this index %d",i);
            return 0;
        }
    }
    printf("The element is not present");
    return 0;
}