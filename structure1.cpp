#include<stdio.h>
#include<string.h>

struct student {
    int rollno;
    char name[50];
    char dept[50];
};

int main() {
    struct student s;
    s.rollno = 59;
    strcpy(s.name, "viraj");
    strcpy(s.dept, "comp");

    printf("%d\n", s.rollno);
    printf("%s\n", s.name);
    printf("%s\n", s.dept);

    return 0;
}

