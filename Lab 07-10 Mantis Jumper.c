#include <stdio.h>
int fibo(long int n){
    long int t1=0,t2=1,next;
    for(int i=0;i<n;i++){
        next = t1+t2;
        t1 = t2;
        t2 = next;
    }
    return next;
}
int main(){
    long int n;
    scanf("%ld",&n);
    printf("method = %ld",fibo(n));
}