//Write a program to input an integer to check if its odd or even 
#include<stdio.h>
int main()
{ int a;
printf("enter a number please: \n ");
scanf("%d", &a );
if( a%2==0)
printf("the number entered is even");
else 
printf(" the number entered is odd");
return 0;
} 