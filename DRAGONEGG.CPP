#include<stdio.h>
#include<conio.h>
int main()
{clrscr();
int g,s,x,y,gold,silver;
printf("Ente coins per gram of gold: ");
scanf("%d",&g);
printf("Enter coins per gram of silver: ");
scanf("%d",&s);
printf("Enter grams of gold: ");
scanf("%d",&x);
printf("Enter grams of silver: ");
scanf("%d",&y);
gold=g*x;
silver=s*y;
if(silver>gold){
printf("Silver");
}
else{
printf("Gold");
}
getch();
return 0;
}