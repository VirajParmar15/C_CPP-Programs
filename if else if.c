#include<stdio.h>
int main(){
	int age;
	
	printf("enter your age");
	scanf("%d",&age);
	
	if(age<12){
		printf("child");
	}
	else if(age<18){
		printf("teenager");
	}
	else if(age>18){
		printf("adult");
	}
	
	return 0;
}
