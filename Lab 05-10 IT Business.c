#include <stdio.h>
int main(){
    float start,now;
    scanf("%f",&start);
    scanf(" %f",&now);
    char atm;
    int fail;
    float money;
    while(1){
        scanf(" %c %f",&atm,&money);
        if(atm=='E'){
            break;
        }
        if(atm=='D' && money<=now){
            now-=money;
            start+=money;
            fail=0;
        }else if(atm=='W' && money<=start){
            start-=money;
            now+=money;
            fail=0;
        }else{
            fail+=1;
        }
        if(fail==3){
            break;
        }
    }
    printf("%.2f\n",start);
    printf("%.2f",now);
    return 0;
}