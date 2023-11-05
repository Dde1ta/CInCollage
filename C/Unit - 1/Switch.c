/*
Switchs -> variable,expression{

}
WAP to implement a simple calculator where a manu is give to the user

1. add 2
2. subtarct 2
3. mul 2
4. division
*/
#include<stdio.h>

int main(){
    int a,b,sign;
    printf("Enter the choice\n1. addition \n2. subtraction, \n3. multiplication \n4. division\nThe choice: ");
    scanf("%d",&sign);

    switch (sign)
    {
        case 1:
            printf("enter the numbers:");
            scanf("%d %d",&a,&b);
            printf("%d + %d = %d",a,b,a+b);
            goto R;
        case 2:
            printf("enter the numbers:");
            scanf("%d %d",&a,&b);
            printf("%d - %d = %d",a,b,a-b);
            break;
        case 3:
            printf("enter the numbers:");
            scanf("%d %d",&a,&b);
            printf("%d * %d = %d",a,b,a*b);
            break;
        case 4:
            printf("enter the numbers:");
            scanf("%d %d",&a,&b);
            if (!b){
                printf("Cannot divide by zero");
            }else{
                printf("%d / %d = %d",a,b,a/b);
            }
            break;
        default:
            printf("Enter a valid choice");
            break;
    }    
    R:return 0;
}