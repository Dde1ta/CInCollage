/*
3.	Write a program consisting of 5 different pyramid printing patterns programs
*/
#include <stdio.h>

int main(){
    int i = 0,j = 0,counter = 1;
    /*
          *
         ***
        *****
       *******
      *********  
    */
    for(i = 0;i<=10;i++){
        if(i%2 == 0){
            printf("\n");
        }else{
            for(j = 0;j<5-(i/2);j++){
                printf(" ");
            }
            for(j = 0;j<i;j++){
                printf("*");
            }
        }
    }

    /*
           1
          222
         33333
        4444444
       555555555
    */
   for(i = 0;i<=10;i++){
        if(i%2 == 0){
            printf("\n");
        }else{
            for(j = 0;j<5-(i/2);j++){
                printf(" ");
            }
            for(j = 0;j<i;j++){
                printf("%d",counter);
            }
            counter++;
        }
    }

    /*
        A
       BBB
      CCCCC
     DDDDDDD
    EEEEEEEEE
    */
   counter = 65;
   for(i = 0;i<=10;i++){
        if(i%2 == 0){
            printf("\n");
        }else{
            for(j = 0;j<5-(i/2);j++){
                printf(" ");
            }
            for(j = 0;j<i;j++){
                printf("%c",counter);
            }
            counter++;
        }
    }

    /*
        A
       BCD
      EFGHI
     JKLMNOP
    QRSTUVWXY
    */
   counter = 65;
   for(i = 0;i<=10;i++){
        if(i%2 == 0){
            printf("\n");
        }else{
            for(j = 0;j<5-(i/2);j++){
                printf(" ");
            }
            for(j = 0;j<i;j++){
                printf("%c",counter++);
            }
        }
    }
    
    /*
      *********
       *******
        *****
         ***
          *  
    */
    for(i = 10;i>=0;i--){
        if(i%2 == 0){
            printf("\n");
        }else{
            for(j = 0;j<5-(i/2);j++){
                printf(" ");
            }
            for(j = 0;j<i;j++){
                printf("*");
            }
        }
    }
}