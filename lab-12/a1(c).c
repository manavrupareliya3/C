/*Print following pattern
5
54
543
5432
54321     */
#include<stdio.h>
void main(){

    int n,i,j,a;
    printf("enter the number of rows:");
    scanf("%d" ,&n);
    a=n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d" ,a);
            a=a-1;
        }
        printf("\n");
        a=n;
    }
}