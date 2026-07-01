//Print simple interest. (principal*roi*time period)/100)
#include<stdio.h>
void main(){
 float principal,roi,timepiriod;
 printf("enter the value of principal=");
 scanf("%f",&principal);
  printf("enter ;the value of roi=");
 scanf("%f",&roi);
  printf("enter the value of timepiriod=");
 scanf("%f",&timepiriod);
 printf("interest=%f",(principal*roi*timepiriod)/100);
}