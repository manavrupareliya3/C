//Search element in array.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d" ,&n);

    int a[n],i,c=0,b;
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&a[i]);
    }   
    printf("enter the position for search:");
    scanf("%d" ,&b);
    printf("%d" ,a[b-1]); 
}