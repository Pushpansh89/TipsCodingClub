#include<stdio.h>
#include<conio.h>
int main()
{clrscr();
int a,b,x=0;
printf("Enter two non-negative integers: ");
scanf("%d %d",&a,&b);
if(a==0 && b==0)
{
printf("%d",++x);
}
if(a>0 && b>0)
{
printf("%d",x);
}
if(a==0 || b==0)
{
if(a==1 || b==1)
{
printf("%d",x+2);
}
if(a==2 || b==2)
{
printf("%d",++x);
}
}
getch();

return 0;
}