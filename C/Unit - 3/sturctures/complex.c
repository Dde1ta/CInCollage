#include<stdio.h>

struct com{
    float R,I;
};

struct com add(struct com,struct com);

int main(){
    struct com c1,c2,c3;

    printf("Enter the first complex number (i j):");
    scanf("%f %f",&c1.R,&c1.I);

    printf("Enter the first complex number (i j):");
    scanf("%f %f",&c2.R,&c2.I);

    c3 = add(c1,c2);

    printf("(%.2f)+(%.2f)*i",c3.R,c3.I);
    return 0;
}

struct com add(struct com c1, struct com c2){
    struct com c3;
    c3.I = c1.I +c2.I;
    c3.R = c1.R +c2.R;
    return c3;
}
