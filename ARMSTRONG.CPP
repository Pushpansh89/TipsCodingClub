#include<stdio.h>
#include<math.h>
int main(){
int a,n,sum=0,b;
printf("Enter a number :");
scanf("%d",&n);
b=n;
while(n>0)
{
a=n%10;
sum=sum+(a*a*a);
n=n/10;
}
if(b==sum)
{
 printf("%d is a armstrong number",b);
}
else
{
 printf("%d is not a armsrong number",b);
 }
return 0;
}
