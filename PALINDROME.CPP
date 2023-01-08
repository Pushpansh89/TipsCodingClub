#include<stdio.h>
#include<conio.h>
int main() 
{clrscr();
int a,pal=0,num,b,c;
printf("Enter a number for checking a palindrome: ");
scanf("%d",&a);
num=a;           
while(num!=0){               
b=num%10;                
pal=pal*10+b;
num/=10;
}
if(pal==a)
{       
printf("%d is a palindrome",a);
}
else
{
printf("%d is not a palindrome",a);
} 
getch();
return 0;
}
