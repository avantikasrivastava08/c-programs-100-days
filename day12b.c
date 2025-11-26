/* Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit */

#include<stdio.h>
 int main()
{ int units;
    printf("enter units spend \n");
    scanf("%d", &units);
    int bill=0;
    if(units<=100)
    {  bill = 5*100;}
    else if( units>100 && units<=200)
    {bill= (units*7)-500;}
    else if(units>200 && units<=300)
    { bill= (units*10)-1200;}
    else
    { bill= (units*12)-2200;}
    printf(" units spent: %d \n ",units);
    printf("total bill calculated: %d \n",bill);
    return 0;
}