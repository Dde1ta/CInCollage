#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,size,i,inc;
    printf("Enter the size of array:");
    scanf("%d",&size);

    p = (int*)malloc(size*sizeof(int));

    printf("enter the values of the array:");
    for(i = 0;i<size;i++){
        scanf("%d",p+i);
    }

    printf("The array is->\n");
    for(i = 0;i<size;i++){
        printf("%d,",*(p+i));
    }


    printf("\nEnter the size of array to be increated:");
    scanf("%d",&inc);
    p = (int*)realloc(p,(size+inc));
    size+=inc;

    printf("\nenter the values of the array:");
    for(i = 0;i<size;i++){
        scanf("%d",p+i);
    }

    printf("The array is->\n");
    for(i = 0;i<size;i++){
        printf("%d,",*(p+i));
    }

    free(p);
    return 0;
}