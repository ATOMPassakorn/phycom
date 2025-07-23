#include <stdio.h>
int main(){
    int x,y,ans;
    scanf("%d %d",&x,&y);
    if(x==y){
        ans = x+y;
        printf("%d + %d = %d",x,y,ans);
    }else{
        ans = x-y;
        printf("%d - %d = %d",x,y,ans);
    }
    return 0;
}