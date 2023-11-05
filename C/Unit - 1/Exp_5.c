//WAP to display avg marks and percentage of a student who is studing 5 subjects 
// max mark are 100

#include<stdio.h>

int main(){
    float s1,s2,s3,s4,s5,avg;

    printf("Enter the marks seprate them by spaces:");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

    avg = (s1+s3+s2+s4+s5)/5;

    printf("YOur avg marks is %f",avg);
    printf("\nThe percentage is %f%%",((s1+s3+s2+s4+s5)/500)*100);

    return 0;
}