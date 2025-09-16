#include <stdio.h>
#include <string.h>
int main(){
    int n,found = 0;;
    scanf("%d",&n);
    char want[4];
    scanf(" %s",want);
    typedef struct{
        char id[10];
        char name[100];
        char author[100];
    }Book;
    Book book[n];
    for (int i = 0; i < n; i++) {
        scanf(" %s %s %s", book[i].id, book[i].name, book[i].author);
    }
    for(int i = 0;i<n;i++){
        if(strcmp(book[i].id,want)==0){
            printf("%s %s %s",book[i].id,book[i].name,book[i].author);
            found = 1;
        }
    }
    if(found==0){
        printf("Not Found");
    }
    return 0;
}