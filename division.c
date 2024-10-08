#include<stdio.h>

int main(){
	
	int r_no,p,c,m,s=0,per;
	printf("Enter Roll non:");
	scanf("%d", &r_no);
     printf("\nEnter the marks of three subjects :");	
	  scanf("%d %d %d" ,&p,&c,&m );
	  s=p+c+m;
	  per=s/3;
	  printf("\nSum = %d ",s);
	  printf("\nPercentage : %d" , per);
	  
	  if(per>=60){
	  	printf("\nFirst Division");
	  }
	  else if(per<60 && per>=45){
	  	printf("\nSecond division");
	  }
	  else if(per<45 && per>=33){
	  	printf("\nThird division");
	  }
        else{
        	printf("Fail");
		}
	return 0;
}
