#include <stdio.h>
int main(){
    int time,day,hour,minute,second;
    scanf("%d",&time);
    day = time/86400;
    time%=86400;
    hour = time/3600;
    time%=3600;
    minute = time/60;
    second = time%=60;
    printf("%d s = %d d %d h %d m %d s",day*86400+hour*3600+minute*60+second,day,hour,minute,second);
}