#include <stdio.h>
#include <math.h>
double math(double a,double b){
    return sqrt((a*a)+(b*b));
}
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf",a,b,math(a,b));
    return 0;
}