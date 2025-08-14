#include <stdio.h>
#include <ctype.h>
void same(char name1[101],char name2[101]){
    int same=0;
    for(int i=0;name1[i] != '\0' || name2[i] != '\0';i++){
        if(isalpha(name1[i]) && isalpha(name2[i])){
            if(tolower(name1[i])==tolower(name2[i])){
                same = 1;
            }else{
                same = 0;
                break;
            }
        }else{
            if(name1[i]==name2[i]){
                same = 1;
            }else{
                same = 0;
                break;
            }
        }
    }
    if(same==1){
        printf("Both strings are the same.");
    }else{
        printf("Both strings are not the same.");
    }
}
void convert(char name[101]){
    for(int i=0;name[i]!='\0';i++){
        if(isupper(name[i])){
            name[i]=tolower(name[i]);
        }else if(islower(name[i])){
            name[i]=toupper(name[i]);
        }
    }
}
int main(){
    char name1[101],name2[101];
    scanf("%[^\n]",name1);
    scanf(" %[^\n]",name2);
    printf("*** Results ***\n");
    convert(name1);
    printf("%s\n",name1);
    convert(name2);
    printf("%s\n",name2);
    printf("***************\n");
    same(name1,name2);
}