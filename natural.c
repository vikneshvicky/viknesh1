#include <stdio.h>
#include <stdio.h>
void main()
{
int n, i,sum=0;
clrscr();
printf("Enter a positive integer:");
scanf("%d",&n);
for(i=1; i <= n; ++i)
{
sum = sum+i;
}
printf("Sum = %d",sum);
getch();
}

