#include<stdio.h>

int main(){
	char c;
	printf("\nEnter Charcater:");
	scanf("%c" , &c);
	
	if(c=='a' ||  c=='e' ||  c=='i' ||  c=='o' ||  c=='u' ||  c=='A' ||  c=='E' ||  c=='I' ||  c=='O' ||  c=='U'){
		printf("Vowel");
	}
	else{
		printf("Consonent");
	}
	return 0;
}
