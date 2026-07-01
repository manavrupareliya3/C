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

    float a,bill;

    printf("enter the units:");
    scanf("%f" ,&a);

    if(a<=50)
    {
        bill=a*0.50;
    }
    else if(a<=150)
    {
        bill=25+(a-50)*0.75;
    }
    else if(a<=250)
    {
        bill=25+75+(a-150)*1.20;
    }
    else
    {
        bill=25+75+120+(a-250)*1.50;
    }

    bill=bill+0.2*bill;
    printf("bill=%f" ,bill);
}