#include<stdio.h>
/*
sum and avg of odd num b/w 300,600 divi by 5
*/
int main(){
    float num = 0,sum = 0,i = 305;

    for(i;i<=595;i+=10){
        sum += i;
        num += 1;
    }
    printf("the sum is %f\n",sum);
    printf("the avg is %f",sum/num);
    return 0;
}