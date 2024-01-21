#include<stdio.h>
int main(){
	int age = 22;
	int *ptr = &age;
	
	int _age = 25;
	int *_ptr = &_age;
	
	printf("%u\n", ptr);
	ptr++;
	printf("%u\n", ptr);
	ptr--;
	printf("%u\n", ptr);
	//ptr = ptr - _ptr;
	ptr = &_age;
	printf("%u\n", ptr);
	
	
	return 0;
	
}
