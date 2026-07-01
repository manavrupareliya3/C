//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i,ec=0,oc=0;
    
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d" ,&a[i]);

        if(a[i]%2==0)
        {
            ec=ec+1;
        }
        else
        {
            oc=oc+1;
        }
    }
    printf("from your input numbers,\n");
    printf("%d even numbers.\n" ,ec);
    printf("%d odd numbers." ,oc);
}