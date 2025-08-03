#include <stdio.h>
#include <ctype.h>
int main(){
    char txt;
    scanf("%c",&txt);
    if(islower(txt)){
        txt=toupper(txt);
        printf("%c",txt);
    }else if(isupper(txt)){
        txt=tolower(txt);
        printf("%c",txt);
    }else{
        printf("error");
    }
    return 0;
}