/*
WAP read a program in uper case and print the value in lower case with it code
*/
#include<stdio.h>
#include<string.h>
int main(){
    char s;
    printf("Enter the string:");
    scanf("%c",&s);
    int S = s|32;
    printf("%c",S);
    return 0;
}