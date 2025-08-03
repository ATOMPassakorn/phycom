#include <stdio.h>
int main(){
    int age,day,money=0;
    scanf("%d\n%d",&age,&day);
    if(day==4){
        money+=100;
        printf("Ticket price: %d Baht",money);
        return 0;
    }
    if(day==1 || day==7){
        money+=20;
    }
    if(age<=12){
        money+=120;
    }else if(age>=13 && age<=59){
        money+=220;
    }else{
        money+=140;
    }
    printf("Ticket price: %d Baht",money);
    return 0;
}