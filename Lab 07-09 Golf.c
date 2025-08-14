#include <stdio.h>
#include <math.h>
double hight(double theta,double u){
    return ((u*u)*(sin((theta*M_PI)/180))*(sin((theta*M_PI)/180)))/(2*9.81);
}
int main(){
    double theta,u;
    scanf("%lf\n%lf",&theta,&u);
    printf("theta (degree) : %.0lf",theta);
    printf("\nu (m/s) : %.0lf",u);
    printf("\nh (m) : %.4lf",hight(theta,u));
}