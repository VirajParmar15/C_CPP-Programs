#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int *p;
int *q;
int i;
p=new int[5];
q=new int[10];
p[0]=1;p[1]=3;p[2]=5;p[3]=7;p[4]=9;
q=new int[10];
for(i=0;i<5;i++)
q[i]=p[i];

p=q;
q=NULL;
for(i=0;i<5;i++)
    printf("%d\n",p[i]);


return 0;
}