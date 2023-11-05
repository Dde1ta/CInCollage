#include<stdio.h>

int main(){
    int a,z;
    z = 120;
    printf("Enter the number: ");
    scanf("%d",&a);

    z ,a = last(&z,a);
    z ,a = last(&z,a);
    z ,a = last(&z,a);
    z ,a = last(&z,a);
    // z = z*10 + a%10;
    // a = a/10;
    // printf("%d %d\n",z,a);
    // z = z*10 + a%10;
    // a = a/10;
    // printf("%d %d\n",z,a);
    // z = z*10 + a%10;
    // a = a/10;
    // printf("%d %d\n",z,a);
    // z = z*10 + a%10;
    // a = a/10;
    // printf("%d %d\n",z,a);

    printf("The number is reversed\n");
    printf("%d",z);
}

int last(int *z, int a){
    *z = (*z)*10 + a%10;
    a = a/10;
    printf("%d %d\n",*z,a);
    return *z,a;
}