#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char txt[201],text;
    char alpha[26]={'q','r','m','n','c','e','d','k','l','j','o','s','h'
                    ,'t','u','f','v','z','g','w','i','a','b','x','y','p'};
    int index=-1;
    scanf("%[^\n]",txt);
    for(int i=0;i<strlen(txt);i++){
        text=txt[i];
        if(txt[i]=='\0'){
            break;
        }
        for(int i=0;i<strlen(alpha);i++){
            if(alpha[i]==tolower(text)){
                index=i;
                break;
            }
        }
        if(isupper(text)){
            if(index+5>25){
                printf("%c",toupper(alpha[(index+5)%26]));
            }else{
                printf("%c",toupper(alpha[index+5]));
            }
        }
        else if(islower(text)){
            if(index+5>25){
                printf("%c",alpha[(index+5)%26]);
            }else{
                printf("%c",alpha[index+5]);
            }
        }else{
            printf("%c",text);
        }
    }
    return 0;
}