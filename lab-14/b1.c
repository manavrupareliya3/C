//Count numbers higher than the average of an array.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i,c=0;
    float sum=0,avg;

    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d" ,&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            c++;
        }
    }
    printf("number of inputs higher than the average of an array=%d" ,c);
}