#include<stdio.h>
#include<string.h>

struct student{
	char name[100];
	int roll;
	float cgpa;
}s1;



int main(){
	strcpy(s1.name,"viraj");
	s1.roll=59;
	s1.cgpa=7.17;
	
	printf("student info :\n");
	printf("name = %s\n",s1.name);
	printf("roll = %d\n",s1.roll);
	printf("cgpa = %f\n",s1.cgpa);
	
	return 0;
}


