#include <stdio.h>
#include <math.h>
int main(){
    int num1,num2,ans;
    scanf("A%d",&num1);
    scanf(" A%d",&num2);
    ans=pow(2,(num2-num1));
    printf("%d",ans);
    return 0;
}