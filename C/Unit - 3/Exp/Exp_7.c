/*
Wap to inpliment perdenied fuction of a str_;

strlen
strcmp
strcat
strcpy
strrev
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str_1[50],str_2[50];
    printf("Enter the first string:");
    gets(str_1);
    printf("Enter the second string:");
    gets(str_2);

    printf("The lenght of \n\tFirst string %d\n\tSecond String %d",strlen(str_1),strlen(str_2));
    return 0;
}