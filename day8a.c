//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
#include<ctype.h>
char main()
{ char ch;
printf("enter a character: ");
scanf("%c", &ch);
if(isupper(ch))
printf("character entered is uppercase");
else if(islower(ch))
printf("character entered is lowercase");
else if(isdigit(ch))
printf("the character entered is a digit");
else 
printf("the character entered is a special character");
return 0;
}