//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{ float cel;
printf(" enter the temperature in celcius: \n ");
scanf("%f", &cel);
float far= (9/5)*cel+32;
printf("the temperature in fahrenheit: %f", far);
return 0;
}