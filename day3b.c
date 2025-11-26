//Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{ int a,b;
    printf("enter number 1: ");
    scanf("%d", &a);
    printf(" enter number 2: ");
    scanf("%d",&b);
    printf("original sequence: %d %d", a,b);
    int c=0;
    c=a;
    a=b;
    b=c;
    printf("the swapped numbers:%d %d ", a,b);
    return 0;
}