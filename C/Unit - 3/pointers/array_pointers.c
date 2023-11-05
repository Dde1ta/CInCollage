/*
WAP to create a static char array of pointer which contain name pf 5 students
print the name of all students on the screen
print the name by skipin the first 2 char of the name
print the name of the starting the thrid student
*/
#include<stdio.h>

int main(){
    char *arr_name[5] = {"Aditya","Bheem","Karan","Divyansh","Lakshay"},i,str_n[8],j;

    for(i = 0;i<5;i++){
        printf("%s ",*(arr_name+i));
    }
    printf("\n");
    for(i = 0;i<5;i++){
        printf("%s ",*(arr_name + i)+2);
    }
    printf("\n");
    for(i = 2;i<5;i++){
        printf("%s ",*(arr_name + i));
    }
    return 0;
}