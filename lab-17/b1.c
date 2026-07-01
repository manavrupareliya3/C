//Copy one array to another using pointers.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d" ,&n);

    int a[n],i;
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&a[i]);
    }
    int *ptr,b[n];
    ptr=a;
    for(i=0;i<n;i++)
    {
      b[i]=*(ptr+i);
      printf("%d " ,b[i]);
    }
}