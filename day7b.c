//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
#include<ctype.h>
int main()
{ char ch;
printf("enter a character: \n");
tolower(ch);
scanf("%c", &ch);
if( ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
printf("the charcter entered is a vowel %c \n", ch);
else 
printf(" the character entered is a consonant %c \n", ch);
return 0;
}