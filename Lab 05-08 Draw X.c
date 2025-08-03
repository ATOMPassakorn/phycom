#include <stdio.h>
#include <stdlib.h>
int main(){
    int row;
    scanf("%d",&row);
    for(int i=-row/2;i<=row/2;i++){
        for(int j=-row/2;j<=row/2;j++){
            if(abs(i)-abs(j)==0){
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}