#include<stdio.h>
#include<math.h>
int main(){
	
	int day;
	
	printf("enter your day between 1 to 7: ");
	scanf("%d",&day);
	
	switch(day) {
		case 1 : printf("monday \n");
				break;
		case 2 : printf("teusday \n");
				break;
		case 3 : printf("wednesday \n");
				break;
	    case 4 : printf("thursday \n");
				break;
		case 5 : printf("friday \n");
				break;
		case 6 : printf("saturday \n");
				break;
		case 7 : printf("sunday \n");
				break;			
	}
	return 0;
}