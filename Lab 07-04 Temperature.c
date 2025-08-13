#include <stdio.h>
#include <ctype.h>
double celsiusToFahrenheit(double celcius){
    return 32+((celcius*9.0)/5.0);
}
double fahrenheitToCelcius(double fahrenheit){
    return (((fahrenheit-32)*5.0)/9.0);
}
void printFarenheit(double fahrenheit){
    printf("%.2lf f",fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c",celcius);
}
int main(){
    double degree;
    char ongsa;
    scanf("%lf %c",&degree,&ongsa);
    if(tolower(ongsa)=='c'){
        printFarenheit(celsiusToFahrenheit(degree));
    }else{
        printCelcius(fahrenheitToCelcius(degree));
    }
    return 0;
}