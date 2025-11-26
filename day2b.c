//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{ int r;
printf("enter radius: ");
scanf("%d", &r);
float pi= 3.14;
float cir= 2*pi*r;
float area= pi*r*r;
printf(" the circumference of the circle is: %lf \n", cir);
printf(" the area of the circle of the circle is: %lf", area);
return 0;
}