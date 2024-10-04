#include<stdio.h>
int main(){
    int p,c,m;
    printf("Enter physics marks:");
    scanf("%d",&p);
    printf("\nEnter maths marks:");
    scanf("%d",&m);
     printf("Enter chemistry marks:");
    scanf("%d",&c);
     if(m>=65 && p>=55 && c>=50 && (p+m+c >= 180) || (m+p >=140)){
        printf("You are eligible for admission");
     }
     else{
        printf("You are not eligible for admission");
     }
    return 0;
}
