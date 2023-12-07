#include<stdio.h>

union bits{
    int bit2;
    int bit;
    int bu;
    int bu23;
}b;

int main(){
    printf("%d",sizeof(b));
    return 0;
}