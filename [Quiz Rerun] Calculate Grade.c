#include <stdio.h>
int main(){
    char info[40];
    int g1, g2, g3, g4, g5, g6;
    scanf("%[^\n]",info);
    scanf(" %d %d %d %d %d %d",&g1,&g2,&g3,&g4,&g5,&g6);

    // Your code here
    printf("Grade announcement 1/2568: %s\n",info);
    printf("GPS/GPA: %.2f",((g1*3.0)+(g2*3.0)+(g3*3.0)+(g4*3.0)+(g5*3.0)+(g6*3.0))/18);

    return 0;
}
