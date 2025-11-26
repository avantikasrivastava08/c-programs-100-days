//Write a program to input a year and check whether it is a leap year or not,using conditional statement
#include<stdio.h>
int main()
{ int l;
printf("enter the year number: ");
scanf("%d", &l);
if(l%4==0)
printf("the year entered is leap year ");
else 
printf("the year is not a leap year ");
return 0;
}