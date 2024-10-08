#include<stdio.h>

int main(){
	
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	
	if(n>0){
		printf("Postive");
	}
	else if(n==0){
		printf("Zero");
	}
	else{
		printf("Grade");
	}
	
	
	return 0;
}
