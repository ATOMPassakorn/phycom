#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char want;
    scanf("%c",&want);
    int count=0;
    char *txt;
    txt = (char *)malloc(150*sizeof(char));
    scanf(" %[^\n]", txt);
    char *end = txt;
    while(*end!='\0'){
        if(tolower(*end)==tolower(want)){
            count++;
        }
        end++;
    }
    printf("%d",count);
    free(txt);
    return 0;
}