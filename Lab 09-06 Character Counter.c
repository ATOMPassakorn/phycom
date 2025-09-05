#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char *str;
    int lower=0,upper=0,digit=0;

    str = (char *) malloc(101 * sizeof(char));

    scanf(" %[^\n]",str);

    char *ptr = str;
    while (*ptr != '\0'){
        if(islower(*ptr)){
            lower++;
        }else if(isupper(*ptr)){
            upper++;
        }else if(isdigit(*ptr)){
            digit++;
        }
        ptr++;
    }
    printf("Lowercase letters: %d\n",lower);
    printf("Uppercase letters: %d\n",upper);
    printf("Digits: %d",digit);
    free(str);

    return 0;
}