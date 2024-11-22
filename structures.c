#include <stdio.h>

struct employee{
    int id;
    // char name[53];
    int marks;
};

int main(){
    struct employee e1,e2;

    e1.id=12;
    e1.marks=34;

    printf("%d",e1.marks);

    return 0;
}