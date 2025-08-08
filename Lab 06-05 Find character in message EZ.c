#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char txt[301],want;
    scanf("%[^\n]",txt);
    scanf(" %c",&want);
    int i=0,size=strlen(txt),count=0,first=1,found=0;
    while(i<size){
        if(tolower(want)==tolower(txt[i])){
            count++;
            found=1;
        }
        i++;
    }
    if(found==1){
        printf("There is/are %d \"%c\" in the above sentences.",count,want);
        printf("\nPosition: ");
    }
    i=0;
    while(i<size){
        if(tolower(want)==tolower(txt[i])){
            if(first==0){
                printf(", ");
            }
            printf("%d",i+1);
            first=0;
        }
        i++;
    }
    if(found==0){
        printf("Not found.");
    }
    return 0;
}