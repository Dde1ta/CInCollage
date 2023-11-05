#include<stdio.h>

int main(){
    int i = 0;
    int n,m;
    printf("Enter the range:");
    scanf("%d %d",&n,&m);
    if (n%2 != 0){
        n++;
    }
    for(n;n<m;n+=2){
        printf("%d\n",n);
    }
    return 0;
}
