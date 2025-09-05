#include <stdio.h>
#include <stdlib.h>
int main(){
    char *str;
    str = (char *) malloc(1 * sizeof(char));
    *str='\0';
    char *end = str;
    char ch;
     while (1) {
        scanf(" %c",&ch);
        if(ch=='-'){
            break;
        }
        size_t size = end-str;
        char *temp = realloc(str,size+2);
        str = temp;
        end = str + size;
        *end = ch;
        end++;
        *end='\0';
     }
     printf("%s\n",str);
     end--;
     while (end >= str) {
        printf("%c", *end);
        end--;
    }
    free(str);
    return 0;
}