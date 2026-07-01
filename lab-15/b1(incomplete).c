//Delete all duplicate elements from an array.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d" ,&n);

    int a[n],i,j;
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&a[i]);
    }   
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }   
    for(i=0;i<n;i++)
    {
      printf("%d " ,a[i]);
    } 
}