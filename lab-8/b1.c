//Print number and its square root for 0 to 9
#include<stdio.h>
#include<math.h>
void main(){
    float i=0.0, ans;

    while (i<=9)
    {
        ans=sqrt(i);
        printf("square root of %f is %f \n" ,i,ans);
        i=i+1;

    }
}