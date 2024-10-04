#include<stdio.h>

int main(){
	  int temp;
	printf("Enter the temperature in Celsius:");
	scanf("%d",&temp);
	
	if(temp<0){
		printf("Freezing wheather");
	}
	else if(temp>=0 && temp<10){
		printf("Very cold wheather");
	}
	
	else if(temp>=10 && temp<20){
		printf(" cold wheather");
	}
	else if(temp>=20 && temp<30){
		printf("Normal wheather");
	}
	else if(temp>=30 && temp<40){
		printf("Hot wheather");
	}
	else{
		printf("Very Hot");
	}
	return 0;
}
