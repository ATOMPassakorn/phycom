#include <stdio.h>
int main(){
    float num1,num2,num3;
    char name1[35],name2[35],name3[35];
    scanf("%f %[^\n]",&num1,name1);
    scanf(" %f %[^\n]",&num2,name2);
    scanf(" %f %[^\n]",&num3,name3);
    if (num1 <= num2 && num1 <= num3) {
        printf("%s is Fastest : %.3f", name1, num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%s is Fastest : %.3f", name2, num2);
    } else {
        printf("%s is Fastest : %.3f", name3, num3);
    }
    return 0;
}