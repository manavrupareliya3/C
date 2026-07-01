/*Check whether character is an alphabet or not using conditional 
operator.*/

#include<stdio.h>
void main(){

char a;
printf("enter the character:");
scanf("%c",&a);

(a>='a'&& a<='z'|| a>='A'&& a<='Z')?printf("Alphabet"):printf("Not an alphabet");
}