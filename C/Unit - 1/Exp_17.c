/*
Wap o find fing max to three number
part 1 using ters
part 2 else if (logical)
part 3 nested if else
*/

#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);

    printf("_______________________________________________Solution By Part 1______________________________________________________________\n");
    (a>b)? (a>c)?printf("%d is the biggest\n",a):printf("%d is the biggest\n",c) : (b>c)?printf("%d is the biggest\n",b):printf("%d is the biggest\n",c);

    printf("_______________________________________________Solution By Part 2______________________________________________________________\n");
    if (a>b && a>c){
        printf("%d is the biggest\n",a);
    }else if (b>a && b>c){
        printf("%d is the biggest\n",b);
    }else{
        printf("%d is the biggest\n",c);
    }

    printf("_______________________________________________Solution By Part 3_____________________________________________________________\n");
    if (a>b){
        if (a>c){
            printf("%d is the biggest\n",a);
        }else{
            printf("%d is the biggest\n",c);
        }
    }else{
        if (b>c){
            printf("%d is the biggest\n",b);
        }else{
            printf("%d is the biggest\n",c);
        }
    }

}