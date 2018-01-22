#include<stdio.h>
void main()
{
int n,rev,rem,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(temp!=n)
{
rem=temp%10;
rev=rev*10+n;
n=n/10;
}
if(rev==n)
{
printf("\nyes");
}
else
{
printf("\nno");
}
}
