#include <stdio.h>
int main(){
    float h,w,bmi;
    scanf(" %f",&h);
    scanf(" %f",&w);
    bmi = w/((h/100)*(h/100));
    printf("%f",bmi);
    return 0;
}