#include <stdio.h>
int main(){
    char txt[101];
    scanf("%[^\n]",txt);
    int size = 0;
    for(int i=0;i<101;i++){
        if(txt[i]=='\0'){
            break;
        }
        size++;
    }
    while(size!=0){
        printf("%c",txt[--size]);
    }
    return 0;
}