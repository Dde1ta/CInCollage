/*
WAP to wirte the number table
*/

#include<stdio.h>

int main(){
    int n,i,i_;
    printf("enter the number of which the table to find and the number till:");
    scanf("%d %d",&n,&i);
    i_ = 0;
    STARTT: i_++;
    if (i_<=i){
        printf("%d * %d = %d\n",n,i_,n*i_);
        goto STARTT;
    }
    return 0;
}