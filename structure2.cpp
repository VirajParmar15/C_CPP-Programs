#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle{
	
	int length;
	int breadth;
	
};

struct rectangle r1={15,20};

int main(){
	
	
	
	r1.breadth=15;
	r1.length=20;
	
	cout<<"area of rectangle = "<<r1.breadth*r1.length<<endl;
	
	printf("%d",sizeof(r1));
	return 0;
}

