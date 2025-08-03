#include <stdio.h>
int main(){
    int duck;
    scanf("%d",&duck);
    if(duck==0){
        printf("Duck Type: Silent Duck");
    }else if(duck>=1 && duck<=10){
        printf("Duck Type: Chill Duck");
    }else if(duck>10 && duck<=50){
        printf("Duck Type: Happy Duck");
    }else if(duck>50){
        printf("Duck Type: Talkative Duck");
    }else{
        printf("Error");
    }
    return 0;
}