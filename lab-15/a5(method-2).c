//Input a string in character array and print string and length of string.
#include<stdio.h>
void main(){
    char s1[100];
    int i,c=1;
    printf("enter the string:");
    scanf("%s" ,s1);
    printf("%s\n" ,s1);

    for(i=1;s1[i]!='\0';i++)
    {
        c++;
    }
    printf("length of string=%d" ,c);
}