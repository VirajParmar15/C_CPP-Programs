#include<stdio.h>

int viraj(int n);

int main(){
	int n;
	printf("enter side n");
	scanf("%d",&n);
	printf("area of sqaure is: %d",viraj(n));
	
	return 0;
}

int viraj(int n){
	return n*n;
}
