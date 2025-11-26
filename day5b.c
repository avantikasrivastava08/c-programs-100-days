//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{ int h,m,s;
    printf("enter seconds: \n");
    scanf("%d", &s);
h= s/3600;
m= (s%3600)/60;
s= s%60;
printf("HOURS MINUTES AND SECONDS ARE: %d %d %d", h,m,s);
return 0;
}

