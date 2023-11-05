/*
WAp  a menu program to allow user to do any:

a. cheack if number is even or odd
b. check number is positive or nagative
c. print(square)
d. print(square root)
*/

#include<stdio.h>
#include<math.h>
int main(){
    int a;
    char ch;

    printf("The menu\na. To check if number id even or odd\nb. number is positiive or not\nc. print square\nd. print square root\nThe choice: ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a':
            printf("enter the numbers:");
            scanf("%d",&a);
            (a%2 ==0)? printf("The number is even"):printf("The number id odd");
            break;
        case 'b':
            printf("enter the numbers:");
            scanf("%d",&a);
            (a == 0)?printf("The number is zero"):(a>0)? printf("The number is even"):printf("The number id odd");
            break;
        case 'c':
            printf("enter the numbers:");
            scanf("%d",&a);
            printf("%d",a*a);
            break;
        case 'd':
            printf("enter the numbers:");
            scanf("%d",&a);
            printf("%lf",sqrt(a));
            break;
        default:
            printf("Enter a valid choice");
            break;
    }
}