/*
to find thw sum every digit in the number
reverse of a number
palin
armstorng
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,number_of_digit = 0,sum = 0,reverse = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n != 0){
        number_of_digit ++;
        sum += n%10;
        reverse = reverse*10 + n%10;
        n /= 10;
    }

    printf("The number of digit %d\nThe sum is %d\nThe reverse is %d",number_of_digit,sum,reverse);
    return 0;

}