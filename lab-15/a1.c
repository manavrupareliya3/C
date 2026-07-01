//Copy all elements of one array to another.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d" ,&n);

    int a[n],b[n],i;
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&a[i]);
      b[i]=a[i];
    }   
    for(i=0;i<n;i++)
    {
      printf("%d" ,b[i]);
    }   
}