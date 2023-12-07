/*
WAP program to add 2 num by USER DEFINRD FUNCTION BY ALL 4 WAY
*/

#include<stdio.h>

void sum_1();
int sum_2();
void sum_3(int a, int b);
int sum_4(int a, int b);

int main(){
    static int a,b,sum;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);

    printf("By first method\n");
    sum_1();

    printf("\nBY secound method\n");
    sum = sum_2();
    printf("The sum = %d",sum);

    printf("\nBY third method\n");
    sum_3(a,b);

    printf("\nBY fourth method\n");
    printf("The sum is %d",sum_4(a,b));

    return 0;
}

void sum_1(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);

    printf("The sum is = %d", a+b);
}

int sum_2(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);

    return a+b;
}

void sum_3(int a, int b){
    printf("The sum is = %d", a+b);
}

int sum_4(int a, int b){
    return a+b;
}

