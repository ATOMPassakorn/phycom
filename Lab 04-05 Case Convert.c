#include <stdio.h>
int main(){
    char c;
    int s;
    scanf("%c",&c);
    if(!(c >= '0' && c<='9')){
        if((int)c >=97 && (int)c <= 122){
            s = (int)c-32;
            printf("%c",s);
        }else if((int)c >=65 && (int)c <= 90){
            s = (int)c+32;
            printf("%c",s);
        }else{
            printf("error");
        }
    }else{
        printf("error");
    }
    return 0;
}