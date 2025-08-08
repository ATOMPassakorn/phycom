#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char name[20][60];
    char temp[60];
    for(int i=0;i<20;i++){
        scanf(" %[^\n]",name[i]);
    }
    for(int i=0;i<20;i++){
        for(int j=i+1;j<20;j++){
            char a[60],b[60];
            strcpy(a,name[i]);
            strcpy(b,name[j]);
            for(int k=0;a[k];k++){
                a[k]=tolower(a[k]);
            }
            for(int k=0;b[k];k++){
                b[k]=tolower(b[k]);
            }
            if(strcmp(a,b)>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    for(int i=0;i<20;i++){
        name[i][0]=toupper(name[i][0]);
        for(int j=1;name[i][j];j++){
            name[i][j]=tolower(name[i][j]);
        }
        for(int j=0;name[i][j];j++){
            if(name[i][j]==' '){
                name[i][j+1]=toupper(name[i][j+1]);
            }
        }
    }
    for(int i=0;i<20;i++){
        printf("%s\n",name[i]);
    }
    return 0;
}