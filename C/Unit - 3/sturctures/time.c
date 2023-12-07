#include<stdio.h>

struct time{
    int sec,min,hour;
};

struct time add_time(struct time,struct time);

int main(){
    struct time t1,t2,t3;
    
    printf("ENter the time(hh:mm:ss):");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);

    printf("ENter the time(hh:mm:ss):");
    scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
    
    t3 = add_time(t1,t2);
    printf("The added time %d:%d:%d",t3.hour,t3.min,t3.sec);
    return 0;
}

struct time add_time(struct time t1,struct time t2){
    struct time t3;
    int sec_a,min_a,hour_a;

    sec_a = t1.sec + t2.sec;
    min_a = t1.min + t2.min;
    hour_a = t1.hour + t2.hour;

    if(sec_a >= 60){
        sec_a -= 60;
        min_a += 1;
    }
    if(min_a >= 60){
        min_a -= 60;
        hour_a += 1;
    }

    t3.sec = sec_a;
    t3.min = min_a;
    t3.hour = hour_a;

    return t3;
}