/*
WAP to input 4 digit number

print the sum of all digit

print the same number by adding 1 to all digits
*/

#include<stdio.h>

int main(){
    int a,digit,sum,add;

    sum = 0;
    add = 0;

    printf("Enter the number: ");
    scanf("%d",&a);

    digit = a%10;
    sum += digit;
    add += ++digit;
    a = a/10;

    digit = a%10;
    sum += digit;
    add += (++digit)*10;
    a = a/10;

    digit = a%10;
    sum += digit;
    add += (++digit)*100;
    a = a/10;

    digit = a%10;
    sum += digit;
    add += (++digit)*1000;
    a = a/10;

    printf("The sum of the number's digits is %d\n",sum);
    printf("The number with its digit added 1 %d",add);
}