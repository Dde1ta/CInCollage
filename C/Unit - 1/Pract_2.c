/*
Class 1 -> n>3 not else 5
Class 2 -> n>2 not else 4
Class 3 -> n>1 not else 5
*/
#include<stdio.h>

int main(){
    int n_sub;    
    char c;
    printf("Enter your class and the number of subject you failed at(First = F, Second = S, Third = T):");
    scanf("%c %d" ,&c,&n_sub);
    switch (c)
    {
    case 'F':
        if (n_sub > 3){
            printf("Sorry no grace marks");
        }else{
            printf("Congrats you gets 5 marks",n_sub);
        }
        break;
    case 'S':
        if (n_sub > 2){
            printf("Sorry no grace marks");
        }else{
            printf("Congrats you gets 4 marks");
        }
        break;
    case 'T':
        if (n_sub > 1){
            printf("Sorry no grace marks");
        }else{
            printf("Congrats you gets 5 marks");
        }
        break;
    
    default:
        break;
    }
    return 0;
}