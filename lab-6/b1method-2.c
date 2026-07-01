/*Input electricity unit charge and calculate the total electricity bill
 according to the given condition:
-
For first 50 units Rs. 0.50/unit
-
For next 100 units Rs. 0.75/unit
-
For next 100 units Rs. 1.20/unit
-
For unit above 250 Rs. 1.50/unit
-
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
void main(){

    float n,bill;
    printf("enter the units:");
    scanf("%f" ,&n);

    if(n>50)
    {
        n=n-50;
        bill=25;

        if(n>100)
        {
            n=n-100;
            bill=100;

            if(n>100)
            {
            n=n-100;
            bill=n*1.5+220;
            }
            else
            {
                bill=n*1.2+100;
            }
        }
        else
        {
            bill=n*0.75;
        }
    }
    else
    {
        bill=n*0.5;
    }
    bill=bill+bill*0.2;

    printf("bill=%f",bill);
}