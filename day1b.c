#include<stdio.h>
int main()
{
int a,b;
printf("enter no.1: ");
scanf("%d",&a);
prinf(" enter no.2: ");
scanf("%d",&b);
int sum= a+b;
int dif= a-b;
int pro= a*b;
int quo= a/b;
printf("sum= %d",sum);
printf("difference %d",dif);
printf("product: %d",pro);
printf("quotient: %d",quo);
return 0;
}