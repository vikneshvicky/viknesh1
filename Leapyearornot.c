#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the number to find leap year or not");
scanf("%d",&n);
if(n%4==0)
printf("The year you entered is a leap year");
else
printf("The year you entered is not a leap ");
getch();
}
