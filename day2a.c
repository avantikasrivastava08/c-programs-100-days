//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include<stdio.h>
int main()
{ int l,b;
    printf("enter length: ");
    scanf("%d", &l);
    printf("enter breath: ");
    scanf("%d", &b);
    int p= 2*(l+b);
    float a= l*b;
    printf(" the perimeter of the rectangle is: %d \n", p);
    printf( " the area of the rectangle is: %f \n", a);
    return 0;
}