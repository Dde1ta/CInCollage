#include<stdio.h>

float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
int mod(int,int);

int main(){
    int a,b,ans,case_;

    do{
        printf("Enter the numbers");
        scanf("%d %d",&a,&b);

        printf("enter the case");
        scanf("%d",&case_);
        
        switch (case_)
        {
        case 1:
            printf("%f\n",add(a,b));
            break;
        case 2:
            printf("%f\n",sub(a,b));
            break;
        case 3:
            printf("%f\n",mul(a,b));
            break;
        case 4:
            printf("%f\n",div(a,b));
            break;
        case 5:
            printf("%d\n",mod(a,b));
            break;
        default:
            case_ = -1;
            break;
        }

    }while(case_ != -1);

    return 0;
}

float add(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float mul(float a, float b){
    return a*b;
}

float div(float a, float b){
    return a/b;
}

int mod(int a, int b){
    return a%b;
}