/*Find the sum and average of different numbers which are accepted by user as 
many as user wants.*/
#include<stdio.h>
void main(){

    int n;
    float sum=0,avg,c=0;

    printf("enter -1 for stop process.\n");

    while(1==1)
    {
        printf("enter the value:");
        scanf("%d" ,&n);

        if(n==-1)
        {
            break;
        }
        else
        {
            sum=sum+n;
            c=c+1;
        }
    }
    avg=sum/c;
    printf("sum=%.2f\n" ,sum);
    printf("avg=%.2f" ,avg);
}