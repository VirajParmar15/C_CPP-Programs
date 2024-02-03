#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct ractangle{
        int length,breadth;
};
int main(){
    struct ractangle r1={10,5};
    printf("%d",sizeof(r1));
    printf("%d",r1.breadth);
    printf("%d",r1.length);
    
return 0;
}