//Input a string in character array and print string and length of string.
#include<stdio.h>
#include<string.h>
void main(){
    char s1[100];
    printf("enter the string:");
    scanf("%s" ,s1);
    printf("%s\n" ,s1);
    printf("length of string=%d" ,strlen(s1));
}