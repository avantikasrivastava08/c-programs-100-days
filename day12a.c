/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/
  #include<stdio.h>
  int main()
  { int a;
printf("enter how many days late \n");
scanf("%d",&a);
int f=0;
if(a<=5)
{
   f=2*a;
    printf("fine: rs.",f);
}
else if(a>5 && a<=10)
{ f= (a*4)-10;}
else if(a>10 && a<=20)
{ int f= (f*6)-30;
}
else
{ printf("MEMEBERSHIP CANCELLED");
}
printf("library fine: %d ",f);
return 0;
  } 
  