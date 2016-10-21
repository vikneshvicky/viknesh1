#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("A is greatest");
}
if((b>a)&&(b>c))
{
printf("B is greatest");
}
if((c>b)&&(c>a))
{
printf("c is greatest");
}
getch();
}
