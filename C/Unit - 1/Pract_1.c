// Grade calculato
#include<stdio.h>

int grader( int grade){
    if(grade >= 90){
        return 'A';
    }else if (grade>=80 && grade<90){
        return 'B';
    }else if (grade>=70 && grade<80){
        return 'C';
    }else if (grade>=60 && grade<70){
        return 'D';
    }else if (grade>=50 && grade<60){
        return 'E';
    }else if (grade<50){
        return 'F';
    }
}

int main(){
    float math,chem,phy,bio,com,total,max;

    printf("enter the marks of math,chemistry,physics,biology,computers");
    scanf("%d %d %d %d %d",&math,&chem,&phy,&bio,&com);

    printf("Enter the total marks per exam:");
    scanf("%d",&max);

    printf("Your percentage in maths is %f and grade is %c\n",(math/max)*100,grader((math/max)*100));
    printf("Your percentage in chemistry is %f and grade is %c\n",(chem/max)*100,grader((chem/max)*100));
    printf("Your percentage in physics is %f and grade is %c\n",(phy/max)*100,grader((phy/max)*100));
    printf("Your percentage in biology is %f and grade is %c\n",(bio/max)*100,grader((bio/max)*100));
    printf("Your percentage in computers is %f and grade is %c\n",(com/max)*100,grader((com/max)*100));
    printf("______________________________________________________________________________________________\n");
    printf("Your total marks are %f and grade is %c",((math+chem+phy+bio+com)/(max*5))*100,grader(((math+chem+phy+bio+com)/(max*5))*100));
    return 0;
}

