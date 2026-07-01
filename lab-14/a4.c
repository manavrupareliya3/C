//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i,max,min;
    float sum=0,avg;

    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d" ,&a[i]);
        sum=sum+a[i];
    }

    // for max.
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }

    // for min.
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
        }
    }

    avg=sum/n;
    printf("from your input numbers,\n");
    printf("%d is maximum.\n" ,max);
    printf("%d is minimum.\n" ,min);
    printf("sum=%.2f\n" ,sum);
    printf("avg=%f\n" ,avg);
    
}