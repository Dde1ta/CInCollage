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

    printf("The lenght of First string %d\nSecond String %d\n",strlen(str_1),strlen(str_2));
    printf("The result of the comparision B/W them is %d\n",strcmp(str_1,str_2));
    strcat(str_1,str_2);
    printf("The string concatinated with each other %s\n",str_1);
    strcpy(str_1,str_2);
    printf("The string copied on each other %s\n",str_1);
    strrev(str_2);
    printf("the second string reversed %s",str_2);
    return 0;
}