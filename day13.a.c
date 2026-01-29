//Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include<stdio.h>
int main()
{
 printf("enter numbers, a and b should not be 0 ");
 int a,b;
 scanf("%d", &a);
 scanf("%d", &b);
 int  result=0;
printf("enter the operation needed to be performed \n");
char op;
scanf(" %c",&op);
switch(op)
{ 
case '+':
result = a+b;
printf("%d",result);
break;
case '-':
 result = a-b;
printf("%d",result);
break;
case '*':
 result = a*b;
printf(" %d",result);
break;
case '/':
 result= a/b;
printf(" %d",result);
break;
case '%':
result= a%b;
printf("%d",result);
default:
printf("invalid input");
}
return 0;

}
