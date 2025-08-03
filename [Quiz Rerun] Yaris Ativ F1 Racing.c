#include <stdio.h>
int main(){
    int status , round, safety,count=0;
    float distance;
    scanf("%d\n%f\n%d\n%d",&status,&distance,&round,&safety);
    if(status==1 && distance<1 && round > 2 && round-safety >= 2){
        printf("DRS allowed");
    }else{
        if(status==0){
            count+=1;
        }
        if(distance>=1){
            count+=1;
        }
        if(round<=2){
            count+=1;
        }
        if(round-safety<2){
            count+=1;
        }
        printf("DRS not allowed %d",count);
    }
    return 0;
}