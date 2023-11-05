/*
WAP program to cheack a year is leap or not
*/

#include<stdio.h>

int main(){
    int year;

    printf("Enter the year:");
    scanf("%d", &year);
    /*
    All century are divideable by 4 so we have to cheack if its is a century or not. 
    If it is we divide by 400 And if not we divide by 4
    */

    (year%100 == 0)? (year%400 == 0)?printf("The year is leap"):printf("The year is not leap") : (year%4 == 0)?printf("The year is leap"):printf("The year is not leap");

    // if (year%100 == 0){
    //     if (year%400 == 0){
    //         printf("The year is leap");
    //     }else{
    //         printf("The year is not leap");
    //     }
    // }else if (year%4 == 0){
    //     if (year%4 == 0){
    //         printf("The year is leap");
    //     }else{
    //         printf("The year is not leap");
    //     }
    // }else{
    //     printf("The year is not leap");
    // }
    return 0;
}