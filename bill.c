#include<stdio.h>
int main(){
   int cus_id,unit;
   float bill;
   printf("Enter Customer id :");
   scanf("%d",&cus_id);
   printf("Enter Unit:");
   scanf("%d",&unit);
   if(unit<=199){
    bill=unit*1.20;
   }
   else if(unit >= 200 && unit<400){
    bill=unit*1.50;
   }
   else if(unit >= 400 && unit < 600){
    bill=unit*1.80;
   }
   else {
    bill = unit*2;
   }

   if(bill>=400){
    bill = bill+(bill*0.15);
    printf("\nCustomer Id : %d",cus_id);
     printf("\n Your bill is : %f",bill);
   }
   else if (bill <= 100){
    bill=100;
    printf("\nCustomer Id : %d",cus_id);
     printf("\n Your bill is : %f",bill);
   }
   else{
    printf("\nCustomer Id : %d",cus_id);
     printf("\n Your bill is : %f",bill);

   }
    return 0;
}
