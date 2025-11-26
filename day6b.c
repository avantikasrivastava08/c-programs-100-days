//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main()
{ int a;
printf("enter a number");
scanf("%d", &a);
if(a<0)
printf("the number entered is negative",a);
else if( a==0)
printf(" the number entered is",a);
else
printf("the number entered is positive ",a);
return 0;
}