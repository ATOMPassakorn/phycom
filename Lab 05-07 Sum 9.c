#include <stdio.h>
int main(){
    int n,sum;
    sum=0;
    while(n!=-9){
        scanf("%d",&n);
        if(n==-9){
            n=0;
            break;
        }
        sum+=n;
    }
    printf("%d",sum);   
    return 0;
}