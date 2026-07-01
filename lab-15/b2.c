//Reverse elements of an array without using second array.
#include<stdio.h>
void main(){
    int n;
    printf("enter the size:");
    scanf("%d" ,&n);
    
    int a[n],i,temp;
    for (i=0;i<n;i++)
    {
        printf("enter the value:");
        scanf("%d" ,&a[i]);
    }
    for(i=0;i<(n/2);i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for (i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
}