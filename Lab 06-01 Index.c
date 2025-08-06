#include <stdio.h>
int main(){
    int M[8]={2,20,8,10,4,6,16,18};
    int N[7] = {1, 3, 9, 7, 11, 15, 19};
    int num,i,found;
    while(1){
        scanf("%d",&num);
        if(num<1 || num>20){
            continue;
        }
        if(found==0){
            for(i=0;i<=8;i++){
                if(num==M[i]){
                    printf("%d is in M at index [%d]",num,i);
                    found=1;
                }
            }
            for(i=0;i<=7;i++){
                if(num==N[i]){
                    printf("%d is in N at index [%d]",num,i);
                    found=1;
                }
            }
        }
        if(found==0){
            printf("%d is not in neither M nor N",num);
        }
        break;
    }
    return 0;
}