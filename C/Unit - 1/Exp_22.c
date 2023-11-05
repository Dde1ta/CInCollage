/*
WAP to print fist natural number
if True:

else:
    
*/

#include<stdio.h>

int main(){
    int i,n;
    printf("enter the numbers:");
    scanf("%d",&n);
    i = 1;
    int sum = 0;
    L_SUM_START:sum +=i++;
    if (n>= i){

        goto L_SUM_START;
    }
    printf("the sum is %d",sum);
}