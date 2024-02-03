#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
	
	int length;
	int breadth;
	
};
int main(){

	
	struct rectangle *p;
	p=new rectangle;
	
	p->breadth=15;
	p->length=7;
	
	cout<<p->breadth<<endl;
	cout<<p->length<<endl;
	
	
	return 0;
}