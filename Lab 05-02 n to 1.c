#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    do{
        n--;
        printf("%d ",n+1);
    }while(n>=1);
    return 0;
}