//Sort elements of an array in an ascending order.
#include<stdio.h>
void main(){

    int n;
    printf("enter the value of size:");
    scanf("%d" ,&n);

    int a[n],i,j,temp;
    for(i=0;i<n;i++)
    {
        printf("enter the value:");
        scanf("%d" ,&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}