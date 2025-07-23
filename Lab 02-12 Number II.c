#include <stdio.h>
int main(){
    char num[5];
    scanf("%s",num);
    printf("%-80.1s",num);
    printf("%-1.0s%-79.2s",num,num);
    printf("%-2.0s%-78.3s",num,num);
    printf("%-3.0s%-77.4s",num,num);
    printf("%-4.0s%-76.5s",num,num);
    return 0;
}