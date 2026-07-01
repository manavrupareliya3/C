//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
void main(){

    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],i,pc=0,nc=0;
    
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d" ,&a[i]);

        if(a[i]>=0)
        {
            pc=pc+1;
        }
        else
        {
            nc=nc+1;
        }
    }
    printf("from your input numbers,\n");
    printf("%d numbers are positive.\n" ,pc);
    printf("%d numbers are negative" ,nc);
}