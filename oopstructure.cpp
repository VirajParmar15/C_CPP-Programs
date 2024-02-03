#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialize(struct rectangle *r,int l,int b){
    r->length = l;
    r->breadth = b;
    cout<<r->breadth<<endl;
    cout<<r->length<<endl;
}
void area(struct rectangle r){
    cout<<r.length*r.breadth<<endl;
}

void changelength(struct rectangle *r,int l){
    r->length = l;
    cout<<r->length<<endl;
}
int main(){
    struct rectangle r;
    initialize(&r,5,10);
    area(r);
    changelength(&r,20);
return 0;
}