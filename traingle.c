#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter three sides of traingle :");
	scanf("%d %d %d" ,&a,&b,&c);
	
	if(a==b && b==c && c==a){
		printf("Equilateral Traingle");
	}
	else if(a!=b && b!=c && c!= a){
		printf("Scalen Traingle");
	}
	else {
		printf("Isoceles Traingle");
	}
	return 0;
}
