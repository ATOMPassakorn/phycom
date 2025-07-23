#include <stdio.h>
int main(){
    float price,per,num,sale;
    scanf(" %f",&price);
    scanf(" %f",&per);
    scanf(" %f",&num);
    sale = ((price*num)*(100-per))/100;
    printf("%.2f",sale);
    return 0;
}