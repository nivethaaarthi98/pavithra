#include<stdio.h>
#include<conio.h>
void main()
{
int val[5],h,l,i;
clrscr();
for(i=0;i<5;i++)
{
printf"enter value 5d:",i+1);
scanf("%d",&val[i]);
}
l=val[0];
h=val[0];
for(i=0;i<5;i++)
{
if(val[i]>h)
h=val[i];
else
{
if(val[i]<1)
l=val[i];
}
}
printf("highest value is %d",h);
printf("lowest value is %d",l);
getch();
}
