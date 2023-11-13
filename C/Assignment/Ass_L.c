#include<stdio.h>
int main()
{ 
int a; float b; char c; char str[50];
printf("ENTER THE VALUE IN THE FOLLOWING ORDER INT FLOAT CHAR STR:\n");
scanf("%d",&a);
scanf("%f",&b);
scanf("%c",&c);
gets(str);
printf("%d\n%f\n%c\n%s",a,b,c,str);
}