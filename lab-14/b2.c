//Calculate the average, geometric and harmonic mean of n elements in an array.
#include<stdio.h>
#include<math.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i,b;
    b=0-n;
    float sum=0,avg,gm,mul=1,res,sum2=0,hm;
    
    for(i=0;i<n;i++)
    {
        printf("enter the value:");
        scanf("%d" ,&a[i]);
        sum=sum+a[i];
        mul=mul*a[i];
        res=1/(float)a[i];
        sum2=sum2+res;
    }
    avg=sum/n;
    gm=pow(mul,1/(float)n);
    hm=n/sum2;

    printf("average=%f\n" ,avg);
    printf("geometric mean=%f\n" ,gm);
    printf("harmonic mean=%f\n" ,hm);
}