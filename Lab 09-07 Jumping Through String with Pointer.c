#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int num,hz;
    scanf("%d",&num);
    scanf("%d",&hz);
    char *text = (char *) malloc(num * sizeof(char));;
    scanf(" %[^\n]", text);
    char *end = text;
    while(*end!='\0'){
        printf("%c", *end);
        end+=hz;
    }
    free(text);
    return 0;
}