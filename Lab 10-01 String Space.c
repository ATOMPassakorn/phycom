#include <stdio.h>
#include <stdlib.h>
int main(){
    char *txt;
    txt = (char *)malloc(150*sizeof(char));
    scanf(" %[^\n]", txt);
    char *end = txt;
    while(*end!='\0'){
        if(*end!=' '){
            printf("%c",*end);
        }
        end++;
    }
    free(txt);
    return 0;
}