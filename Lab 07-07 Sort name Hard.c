#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[n][60];
    char lower[n][60];
    char temp[60];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", name[i]);
        strcpy(lower[i], name[i]);
        for (int j = 0; lower[i][j]; j++) {
            lower[i][j] = tolower(lower[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(lower[i], lower[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);

                strcpy(temp, lower[i]);
                strcpy(lower[i], lower[j]);
                strcpy(lower[j], temp);
            }
        }
    }
    for(int i=0;i<n;i++){
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
    for(int i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
    return 0;
}