#include "string.h"
typedef struct stu1{
    char name1[6];
    char name2[6];
    double marks;
}STU1;
void main(){
    STU1 s1={"rohit","kumar",87.43},*p1;
    char *p;
    p1=&s1;
    p=memchr(p1,'u',sizeof(STU1));
    printf("%s",p);  
}

/*
    The Output is:
    umar    
*/