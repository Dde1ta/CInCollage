#include<stdio.h>
#include<math.h>
int main(){
    int i,n,number_of_digit = 0,n_,sum = 0,digit,number;
    printf("Enter the number:");
    scanf("%d",&n);
    n_ = n;
    number = n_;
    while(n != 0){
        number_of_digit ++;
        n/=10;
    }
    printf("%d are the number of digit\n",number_of_digit);
    while(n_ != 0 ){
        digit = n_%10;
        sum += pow(digit,number_of_digit);
        n_/=10;
    }
    if (sum == number){
        printf("Yes");
    }else{
        printf("No");
    }
}