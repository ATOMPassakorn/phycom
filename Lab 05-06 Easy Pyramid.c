#include <stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    for(int i = 1;i<=row;i++){
        for(int j = row-1;j>=i;j--){
        printf(" ");
        }
        for(int k = 1;k<=(i*2)-1;k++){
        printf("*");
        }
        if(i!=row){
            printf("\n");
        }   
    }
    return 0;
}