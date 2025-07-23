#include <stdio.h>
int main(){
    float num1,num2,num3,med;
    scanf("%f %f %f",&num1,&num2,&num3);
    if ((num1 >= num2 && num1 <= num3) || (num1 >= num3 && num1 <= num2)) {
        med = num1;
    } else if ((num2 >= num1 && num2 <= num3) || (num2 >= num3 && num2 <= num1)) {
        med = num2;
    } else {
        med = num3;
    }
    printf("%.2f",med);
    return 0;
}