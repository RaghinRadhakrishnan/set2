#include<stdio.h>
void main()
{
int num,sum=0,rem=0,t;
scanf("%d", &num);
t=num;
while(t!=0)
{
rem=t%10;
sum=sum+(rem*rem*rem);
t/=10;
}  
if(sum==num)  
{
printf("\nyes",num);
}
else
{
printf("\nno",num);
}
}
