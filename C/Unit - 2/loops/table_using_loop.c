#include<stdio.h>

int main(){
    int i = 1;
    int n,m;
    printf("Enter the number and the number till:");
    scanf("%d %d",&n,&m);
    for(i;i<=m;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    scanf("%d",&m);
}