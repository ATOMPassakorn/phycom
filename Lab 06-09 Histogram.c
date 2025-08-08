#include <stdio.h>
#include <ctype.h>
int main(){
    int n,same=0;
    scanf("%d",&n);
    char txt,letter[n];
    int count[n];
    for(int i=0;i<n;i++){
        scanf(" %c",&txt);
        int found=0;
        for(int j=0;j<same;j++){
            if(letter[j]==tolower(txt)){
                count[j]++;
                found=1;
                break;
            }
        }
        if(!found){
            letter[same] = tolower(txt);
            count[same] = 1;
            same++;
        }
    }
    for(int k=0;k<same;k++){
        printf("%c: %d\n",letter[k],count[k]);
    }
    return 0;
}