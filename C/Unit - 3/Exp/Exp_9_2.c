//WAP to diff b/w struct and union by the following sinario
/*
where a template named ans point will with 3 data menber by ieger x and y and char z
*/
#include<stdio.h>

union point_u{
    char z;
    int x,y;
};

struct point_s{
    char z;
    int x,y;
};

int main(){
    struct point_s p;
    union point_u p1;

    printf("ENter the values");
    scanf("%c %d %d",&p.z,&p.x,&p.y);
    printf("The values are: %c,%d,%d\n",p.z,p.x,p.y);

    printf("ENter z:");
    scanf(" %c",&p1.z);
    printf("z is %c\nEnter the value of x:",p1.z);
    scanf("%d",&p1.x);
    printf("z is %d\nEnter the value of y:",p1.x);
    scanf("%d",&p1.y);
    printf("z is %d\n",p1.y);

    printf("The diff is \nthe size of struct = %d\nthe size of union = %d",sizeof(p),sizeof(p1));
    return 0;

}