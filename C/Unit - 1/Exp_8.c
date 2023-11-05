// WAP Where user will enter time in sec
// display the time in Hr:min:sec

#include<stdio.h>

int main(){
    int sec;

    printf("Enter the time in secs: ");
    scanf("%d",&sec);

    int h = sec/3600;
    sec = sec%3600;
    int min = sec/60;
    sec = sec%60;

    printf("The Time is %d:%d:%d",h,min,sec);
    return 0;
}