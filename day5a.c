//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{ int p,n,r;
printf("enter principle: ");
scanf("%d", &p);
printf("enter rate: ");
scanf("%d", &r);
printf("enter time: ");
scanf("%d", &n);
double si= (p*r*n)/100;
double ci= p*pow((1+(r/100.00)),n)-p;
printf("the compound interest is: %2lf \n", ci);
printf(" the simple interst is: %2lf \n", si);
return 0;
}