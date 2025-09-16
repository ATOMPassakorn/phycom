#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char* txt;
    int sort=0;
    txt = (char *)malloc(200*sizeof(char));
    scanf(" %s", txt);
    for(int i = 0; i<strlen(txt)-1;i++){
        sort = 0;
        for(int j =0; j<strlen(txt)-i-1;j++){
            if(txt[j]>txt[j+1]){
                sort = 1;
                char temp = txt[j+1];
                txt[j+1]=txt[j];
                txt[j]=temp;
            }
        }
        if(sort == 0){
            break;
        }
    }
    printf("%s", txt);
    free(txt);
    return 0;
}