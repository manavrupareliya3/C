//Swap two arrays using pointers.
#include<stdio.h>
void main(){

    int n,i;
    printf("enter the size of arrays:");
    scanf("%d" ,&n);
    printf("enter the values of first array:\n");
    int a[n];
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&a[i]);
    }

    printf("enter the values of second array:\n");
    int b[n];
    for(i=0;i<n;i++)
    {
      printf("enter the value:");
      scanf("%d" ,&b[i]);
    }

    int *p1,*p2,*temp;
    p1=a;
    p2=b;
    for(i=0;i<n;i++)
    {
        *temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=*temp;
        a[i]=*(p1+i);
        b[i]=*(p2+i);
    }
    for(i=0;i<n;i++)
    {
      printf("%d " ,a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
      printf("%d " ,b[i]);
    }
}