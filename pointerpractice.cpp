#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {

   
   int *p;
   //p=(int *)malloc(5*sizeof(int));
   p=new int[5];
   p[5]={10};

   for(int i=0;i<6;i++){
    cout<<p[i]<<endl;
   }
    delete [ ] p;
    //free(p);
    return 0;
}