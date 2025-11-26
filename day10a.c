//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main()
{ int a,b,c;
printf("enter all the sides of the triangle");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if( a!=b && a!=c && b!=c)
printf("the triangle entered is a scalene triangle ");
else if( a==b && b==c && c==a)
printf("the triangle enterd is a equilateral triangle ");
else 
printf("the triangle is isoceles triangle ");
return 0;
}