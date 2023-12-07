#include<stdio.h>

int main(){
    int i = 0;
    int n,_n,m;
    printf("Enter the num:");
    scanf("%d",&n);
    m = n;
    while(m != 0){
        _n = _n*10 + m%10;
        m /= 10;
        printf("%d %d\n",m,_n);
        scanf("%c");
    }
    if(n == _n){
        printf("Yes");
    }else{
        printf("No");
    }
}