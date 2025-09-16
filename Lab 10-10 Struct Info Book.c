#include <stdio.h>
#include <string.h>
int main(){
    typedef struct{
        char fname[60];
        char lname[60];
        char sex[10];
        unsigned int age,id;
        float gpa;
    }student_info;
    student_info s;
    scanf("%s %s %s %d %d %f",s.fname, s.lname, s.sex, &s.age, &s.id, &s.gpa);
    if(strcmp(s.sex, "Male") == 0){
        printf("Mr %c %s (%d) ID: %d GPA %.2f",s.fname[0], s.lname, s.age, s.id, s.gpa);
    }else{
        printf("Miss %c %s (%d) ID: %d GPA %.2f",s.fname[0], s.lname, s.age, s.id, s.gpa);
    }
    return 0;
}