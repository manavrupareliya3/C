/*Find missing numbers of sequence using array.
(in a sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9)*/
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i,b,d,c,in;

    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d" ,&a[i]);
    }
    b=a[0];
    d=a[1]-a[0];
    in=((a[n-1]-a[0])/d)+1;
    for(i=0;i<in;i++)
    {
        c=b+(i*d);
        if(c!=a[i])
        {
            printf("%d " ,c);
        }
    }
}