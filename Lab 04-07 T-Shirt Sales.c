#include <stdio.h>
int main(){
    float old,per,price1,price2;
    int num,f,r;
    scanf(" %f",&old);
    scanf(" %f",&per);
    scanf(" %d",&num);
    price1 = ((old*num)*(100-per))/100;
    f = num/(2+1);
    r = num - f * (2+1);
    price2 = old * 2 * f + old * r;
    if(price1<price2){
        printf("Discount %.0f%%\n",per);
        printf("%.2f",price1);
    }else if(price2<price1){
        printf("Buy 2 Get 1\n");
        printf("%.2f",price2);
    }else{
        printf("Discount %.0f%%\n",per);
        printf("%.2f",price1);
    }
}