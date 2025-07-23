#include <stdio.h>
#include <math.h>
int main(){
    float price,d,h;
    scanf(" %f",&price);
    scanf(" %f",&d);
    scanf(" %f",&h);
    float volume = h*M_PI*((d/2)*(d/2));
    float bath = price/volume;
    printf("Volume : %.2fml\n",volume);
    printf("Baht/ml : %.4f",bath);
    return 0;
}