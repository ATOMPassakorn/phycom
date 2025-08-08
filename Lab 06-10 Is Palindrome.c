#include <stdio.h>
#include <string.h>
int main(){
    char txt[101];
    scanf("%[^\n]",txt);
    int l=0,h=strlen(txt)-1,palin;
    while(h>l){
        if(txt[l++]==txt[h--]){
            palin=1;
        }else{
            palin=0;
        }
    }
    if(palin==1){
        printf("It is Palindrome.");
    }else{
        printf("It is not Palindrome.");
    }
    return 0;
}