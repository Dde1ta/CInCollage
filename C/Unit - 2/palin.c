#include<stdio.h>

int main(){
    int number,number_rev,save;
    printf("Enter the number");
    scanf("%d",&number);
    save = number;
    while(save != 0){
        number_rev = (save%10) + number_rev*10;
        save /= 10;
        printf("rev is %d save is %d\n",number_rev,save);
    }
    printf("%d\n",number_rev);
    if(number_rev == number){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}