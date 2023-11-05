#include<stdio.h>

int main(){
    int total,n_500,n_200,n_100,n_20,n_10,n_1;
    printf("ENter the amount:");
    scanf("%d",&total);
    n_500 = total/500;
                                                                                            total = total%500;
    n_200 = total/200;
total = total%200;
    n_100 = total/100;
        total = total%100;
        n_20 = total/20;
    total = total%20;
    n_10 = total/10;
    total = total%10;
    n_1 = total/1;
    total = total%1;
    printf("You need %d 500 notes, %d 200 notes, %d 100 notes, %d 20 notes, %d 10 notes, %d 1 coins",n_500,n_200,n_100,n_20,n_10,n_1);
    return 0;
}