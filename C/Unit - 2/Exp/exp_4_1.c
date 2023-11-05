/*
Armstrong,Prime,Perfect
*/
#include<stdio.h>
#include<math.h>
int main(){
    int number,case_,i = 0,n,number_of_digit = 0,n_,sum = 0,digit;

    printf("Enter the number:");
    scanf("%d",&number);

    printf("\nEnter the case:\n1)Amrstrong\n2)Prime\n3)Perfect\nEnter the number(1,2,3):");
    scanf("%d",&case_);

    switch (case_)
    {
    case 1:
        //Armstrong
        n_ = number;
        n = n_;
        //finding the number of digits
        while(n != 0){
            number_of_digit ++;
            n/=10;
        }
        printf("%d are the number of digit\n",number_of_digit);
        //finding the sum of powers of all digits
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
        break;
    case 2:
        //prime
        if(number%2 == 0){
            if(number == 2){
                printf("it is a prime number");
                return 0;
            }else{
                printf("it is not a prime number as it is dividable by 2");
                return 0;
            }
        }
        i = 3;
        for(i;i<=number/3;i+=1){
            if(number%i == 0){
                printf("it is not a prime number as it is dividable by %d",i);
                return 0;
            }
        }
        printf("it is a prime number");
        return 0;
        break;
    case 3:
        //perfect
        sum = 1;
        if(number%2 == 0){
            if(number == 2){
                printf("not perfect");
                return 0;
            }else{
                sum += 2;
            }
        }

        for(i = 3;i<=number/2;i+=1){
            if(number%i == 0){
                sum += i;
            }
        }
        if(sum == number){
            printf("perfect ;)");
        }else{
            printf("not perfect :(");
        }
        break;
    default:
        break;
    }
}