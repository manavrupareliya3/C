//Check whether given character is vowel or consonant. (Using single if only)
#include<stdio.h>
void main(){
char a;

printf("enter the value of a=");
scanf("%c",&a);

if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("vowels");
}
else
{
    printf("consonant");
}
}