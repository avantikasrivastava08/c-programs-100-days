#include<stdio.h>
int main()
{ int i;
printf("enter day number please ");
scanf("%d",&i);
switch(i)
{
case 1:
printf("monday");
break;
case 2: 
printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thrusday");
break;
case 5:
printf("friday");
break;
case 6: 
printf("saturday");
break;
case 7:
printf("sunday");
default: 
printf("invalid day number ");
}
return 0;
}