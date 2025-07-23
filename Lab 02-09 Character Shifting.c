#include <stdio.h>
int main(){
    char x1,x2,x3,x4,x5;
    scanf(" %c",&x1);
    scanf(" %c",&x2);
    scanf(" %c",&x3);
    scanf(" %c",&x4);
    scanf(" %c",&x5);
    int a1 = x1+1;
    printf("%c\n",(char)a1);
    printf("%c\n",x2);
    int a3 = x3+1;
    printf("%c\n",(char)a3);
    printf("%c\n",x4);
    int a5 = x5+1;
    printf("%c",(char)a5);
    return 0;
}