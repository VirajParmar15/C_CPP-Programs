#include<stdio.h>
int main(){
	printf("%d \n", 3<4 && 3>4);
	printf("%d \n", 3<4 && 3>2);
	
	printf("%d \n", 3<4 || 3>2);
	printf("%d \n", 3>4 || 3<2);
	
	printf("%d \n", !(3<4 && 3>2));
	printf("%d \n", !(3>4 && 3>2));
	
	return 0;
	
	
}
