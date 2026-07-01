//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i;

    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d" ,&a[i]);
    }
    printf("normal order:");
    for(i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
    printf("\n");
    printf("reverse order:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d " ,a[i]);
    }
    
}