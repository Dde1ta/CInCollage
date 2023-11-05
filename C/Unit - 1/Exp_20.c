/*
WAP to print fist natural number
*/

#include<stdio.h>

int main(){
    int i,n;
    printf("enter the numbers:");
    scanf("%d",&n);
    i = 1;
    printf("Print the numbers till n");
    L_NA_START:printf("%d\n",i++);
    if (n>= i){
        goto L_NA_START;
    }
    printf("Print sum numbers till n");
    i = 1;
    int sum = 0;
    L_SUM_START:sum +=i++;
    if (n>= i){
        goto L_SUM_START;
    }
    printf("Print sub numbers till n",-1*sum);
    


}