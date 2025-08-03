#include <stdio.h>
#include <ctype.h>
int main(){
    char txt;
    scanf("%c",&txt);
    if(tolower(txt)=='s'){
        printf("Soft");
    }else if(tolower(txt)=='m'){
        printf("Medium");
    }else if(tolower(txt)=='h'){
        printf("Hard");
    }else if(tolower(txt)=='i'){
        printf("Intermediate");
    }else if(tolower(txt)=='w'){
        printf("Wet");
    }
    return 0;
}