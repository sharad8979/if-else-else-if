#include<stdio.h>

int main(){
	char c;
	printf("Enter the grade:");
	scanf("%c",&c);
	
	if(c=='E'){
		printf("Excellent");
	}
	else if (c== 'V'){
		printf("Very Good");
	}
	else if (c== 'G'){
		printf("Very Good");
	}
	else if (c== 'A'){
		printf("Very Good");
	}
	else if (c== 'F'){
		printf("Very Good");
	}
	else {
		printf("wrong choice");
	}
	return 0;
}
