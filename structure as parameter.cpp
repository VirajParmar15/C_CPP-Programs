#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle {
	int breadth;
	int length;
};
void fun(struct rectangle *p){
	cout<<"length"<<p->length<<"breadth"<<p->breadth<<endl;
}
int main(){
	struct rectangle r={10,5};
	fun(&r);
	printf("length %d \nbreadth %d",r.length,r.breadth);

	return 0;
}