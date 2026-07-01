//Store n elements in an array and print the elements using pointer.
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
    int *ptr;
    ptr=a;
    for(i=0;i<n;i++)
    {
      printf("%d " ,*(ptr+i));
    }
}