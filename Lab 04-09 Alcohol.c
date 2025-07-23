#include <stdio.h>
int main() {
    char sex;
    float weight, drink, al_in_drink;
    int can, hour;
    scanf(" %c", &sex);
    scanf(" %f", &weight);
    char drive;
    scanf(" %c", &drive);
    scanf(" %f", &drink);
    scanf(" %f", &al_in_drink);
    scanf(" %d", &can);
    scanf(" %d", &hour);
     
    if (sex=='M') {
        float man_al = ((al_in_drink * drink * can) / 100) / (weight * 0.68 * 10) * 1000;
        if (hour > 1) {
            man_al -= (hour - 1) * 15;
        }
        if (man_al < 50 && drive=='Y') {
            printf("Safe");
        } else if (man_al >= 50 || drive=='N') {
            printf("Not Safe");
        }
    } else {
        float girl_al = ((al_in_drink * drink * can) / 100) / (weight * 0.55 * 10) * 1000;
        if (hour > 1) {
            girl_al -= (hour - 1) * 15;
        }
        if (girl_al < 50 && drive=='Y') {
            printf("Safe");
        } else if (girl_al >= 50 || drive=='N') {
            printf("Not Safe");
        }
    }
    return 0;
}