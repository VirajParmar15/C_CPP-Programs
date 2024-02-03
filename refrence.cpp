#include<stdio.h>
#include<iostream>
using namespace std;
int main() {

    int a=25;
    int &r = a;
    r = 30;
    cout<<"Value of a: " << a << endl;  // Value of r: 25

    return 0;
}