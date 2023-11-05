/*
Wap a program where user will input a char and we will tell if its a vowel or not

a e i o u
97  
101
105
111
117
*/

#include<stdio.h>

int main(){
    char a_;
    printf("Enter the char:");
    scanf("%c",&a_);
    (a_ == 'a' || a_ == 'e' || a_ == 'i' || a_ == 'o' || a_ == 'u')?printf("The char is a vowel"):printf("The char is not a vowel");
    return 0;

}