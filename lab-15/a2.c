//Count total number of negative elements in array.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d" ,&n);

    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&a[i]);
    }   
    for(i=0;i<n;i++)
    {
      if(a[i]<0)
      {
        c++;
      }
    }  
    printf("%d" ,c); 
}