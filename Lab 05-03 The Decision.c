#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if(m>n){
        do{
                m--;
                printf("%d ",m+1);
            }while(m>=n);
        }else if(n>m){
        for(int i=m;i<=n;i++){
                printf("%d ",i);
        }
    }
    return 0;
}