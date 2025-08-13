#include <stdio.h>
#include <math.h>
double perimeter(double a,double b){
    double c;
    c = sqrt((a*a)+(b*b));
    return a+b+c;
}
double area(double a,double b){
    return 0.5*a*b;
}
int main(){
    double a,b,ar,p;
    scanf("%lf\n%lf",&a,&b);
    ar = area(a,b);
    p = perimeter(a,b);
    printf("Perimeter: %.2lf\n",p);
    printf("Area: %.2lf",ar);
    return 0;
}