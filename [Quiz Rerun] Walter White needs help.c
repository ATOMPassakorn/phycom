#include <stdio.h>
int main(){
    int start,end,sum=0;
    scanf("%d",&start);
    scanf("%d",&end);
    if(start<end){
        printf("pass : ");
        for(int i=start;i<=end;i++){
            if(i%2==0){
                printf("%d ",i);
                sum+=i;
            }
        }
        printf("\nSum : %d",sum);
    }else if(start>=end){
        printf("pass : ");
        for(int i=start;i>=end;i--){
            if(i%2==0){
                printf("%d ",i);
                sum+=i;
            }
        }
        printf("\nSum : %d",sum);
    }
    return 0;
}