#include<stdio.h>

struct point{
    char a,b;
    char d,e;
    int c;
};

int main(){
    struct point p;
    printf("%d",sizeof(p));
    return 0;
}
