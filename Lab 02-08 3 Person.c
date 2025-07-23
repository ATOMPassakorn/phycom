#include <stdio.h>
int main(){
    char fname[30],sname[30],person2[30],person3[30];
    scanf("%s",fname);
    scanf("%s",sname);
    getchar();
    scanf("%[^\n]",person2);
    getchar();
    scanf("%[^\n]",person3);
    printf("Person 1: %s %s\n",fname,sname);
    printf("Person 2: %s\n",person2);
    printf("Person 3: %s",person3);
    return 0;
}