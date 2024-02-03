#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l,int b){
        length=l;
        breadth=b;
        cout<<breadth<<endl;
        cout<<length<<endl;
    }
    /*void initialize(int l,int b){
        length=l;
        breadth=b;
        cout<<breadth<<endl;
        cout<<length<<endl;
    }*/
    void area(){
        cout<<length*breadth<<endl;
    }
    void changelength(int l){
        length=l;
        cout<<length<<endl;
    }
};
int main(){
    rectangle r(10,5);
    //r.initialize(10,5);
    r.area();
    r.changelength(20);
return 0;
}