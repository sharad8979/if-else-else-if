#include<stdio.h>
int main(){
	int sp,cp,p,l;
	
	printf("Enter the selling and cost price :");
	scanf("%d %d",&sp,&cp);
	if(sp>cp){
		p=sp-cp;
		printf("Profit : %d",p);
	}
	else if (sp == cp){
		printf("No profit No loss");
	}
	else {
		l=cp-sp;
		printf("Loss : %d",l);
	}
	return 0;
}
