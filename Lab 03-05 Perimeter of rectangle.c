#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    double pe = (a*2)+(b*2);
    printf("Perimeter of rectangle = %.4lf units",pe);
    return 0;
}